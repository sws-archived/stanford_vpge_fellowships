<?php
/**
 * @file
 * Context condition for menu navigation heirarchy.
 */

class context_condition_active_fellowships extends context_condition {

  /**
   * Provide a list of specific nodes to check if under in heirarchy and a
   * default all option.
   * @return array an array of options
   */
  function condition_values() {
    $values = array();
    $values['any'] = t('Any Fellowship Section');

    // Get fellowship nodes.
    $nodes_r = db_select('node', 'n')
      ->fields('n', array('nid', 'title'))
      ->condition('type', 'fellowship_funding')
      ->orderBy('title', "ASC")
      ->execute();
    $node_nids = $nodes_r->fetchAllAssoc('nid');

    foreach ($node_nids as $nid => $obj) {
      $values[$obj->nid] = $obj->title;
    }

    return $values;
  }

  /**
   * [options_form description]
   * @param  [type] $context [description]
   * @return [type]          [description]
   */
  function options_form($context) {
    // $defaults = $this->fetch_from_context($context, 'options');
    // return array(
    //   'node_form' => array(
    //     '#title' => t('Set on node form'),
    //     '#type' => 'select',
    //     '#options' => array(
    //        CONTEXT_NODE_VIEW => t('No'),
    //        CONTEXT_NODE_FORM => t('Yes'),
    //        CONTEXT_NODE_FORM_ONLY => t('Only on node form')
    //     ),
    //     '#description' => t('Set this context on node forms'),
    //     '#default_value' => isset($defaults['node_form']) ? $defaults['node_form'] : TRUE,
    //   ),
    // );
  }


  /**
   * Assert the context condition of a path under a fellowship in the
   * fellowship menu.
   */
  function execute() {
    $args = func_get_args();
    $contexts = $this->get_contexts();

    foreach ($contexts as $context) {
      $conditions = $context->conditions['active_fellowships'];
      foreach ($conditions['values'] as $key => $value) {
        if ($key == 'any') {
          $this->assert_any_fellowship($context);
        }
        else {
          $this->assert_specific_fellowship($context, $key);
        }
      }
    }
  }

  /**
   * Assert that the current path is in the fellowships menu and under a fellowship.
   * @return [type] [description]
   */
  protected function assert_any_fellowship($context) {

    // Some info.
    $menu = _stanford_vpge_fellowships_get_fellowship_menu();
    $current_path = current_path();
//    $current_path_alias = drupal_lookup_path('alias', $current_path);
    $menu_item = menu_get_item($current_path);
//    $menu_tree = menu_tree_all_data($menu['menu_name']);
//    // And add the active trail data back to the full tree.
//    menu_tree_add_active_path($menu_tree);
    $menu_tree_page = menu_tree_page_data($menu['menu_name']);

    global $node;

    // If path is a fellowship assert it.
    if ($node->type == 'fellowship_funding') {
      $this->condition_met($context, 'all');
      return;
    }


    // Loop through the trail and see where we are at.
    foreach ($menu_tree_page as $index => $item) {

       if ($item['link']['link_path'] == $current_path) {
         $this->condition_met($context, 'all');
          break;
       }

       if (!empty($item['below'])) {
         $this->check_below_links($item['below'], $context);
       }


    }

  }

  public function check_below_links($items, $context) {
      foreach ($items as $item) {
          if ($item['link']['link_path'] == current_path()) {
              $this->condition_met($context, 'all');
              break;
          }
          if (!empty($item['below'])) {
              $this->check_below_links($item['below'], $context);
          }
      }
  }

  /**
   * Asserts if current path is under a specific fellowship section.
   * @param  integer $nid [description]
   * @return [type]       [description]
   */
  protected function assert_specific_fellowship($context, $nid) {

    if (!is_numeric($nid)) {
      throw new Exception("NID param was not an integer");
    }

    // Some info.
    $menu = _stanford_vpge_fellowships_get_fellowship_menu();
    $current_path = current_path();
    $current_path_alias = drupal_lookup_path('alias', $current_path);
    $menu_item = menu_get_item($current_path);
    $menu_trail = menu_get_active_trail();
    global $node;

    // If path is a fellowship assert it directly.
    if ($node->type == 'fellowship_funding') {
      if ($nid == $node->nid) {
        $this->condition_met($context, $nid);
      }
      return;
    }

    // Loop through the trail and see where we are at.
    foreach ($menu_trail as $index => $item) {

      // Skip home.
      if ($index == 0) {
        continue;
      }

      // Check if we are in the right menu.
      if ($item['menu_name'] !== $menu['menu_name']) {
        continue;
      }

      // Check if this item is a match for current.
      if ($item['link_path'] == $current_path) {

        // Check if the parent (index 1) is the correct fellowship.
        $menu_parent_nid = str_replace('node/', '', $menu_trail[1]['link_path']);

        // Ensure we just have a nid.
        if (!is_numeric($menu_parent_nid)) {
          continue;
        }

        // Assert if in the correct fellowship section.
        if ($nid == $menu_parent_nid) {
          $this->condition_met($context, $nid);
        }

      }

    }

  }


}
