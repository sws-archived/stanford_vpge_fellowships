<?php
/**
 * @file
 * Context reaction of active fellowship.
 */


class context_reaction_active_fellowships extends context_reaction {



  /**
   * Provide a form element that allow the admin to chose a menu item.
   */
  public function options_form($context) {
    $values = array();

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

    return array(
      '#title' => $this->title,
      '#description' => $this->description,
      '#options' => $values,
      '#type' => 'select',
      '#default_value' => $this->fetch_from_context($context),
    );
  }

  /**
   * Override of options_form_submit().
   * Trim any identifier padding for non-unique path menu items.
   */
  public function options_form_submit($values) {
    return $values;
  }


  /**
   * [execute description]
   * @return [type]       [description]
   */
  public function execute() {

    $contexts = context_active_contexts();
    foreach ($contexts as $context_name => $context) {
      if (isset($context->reactions['active_fellowships'])) {
        $active_nid = $context->reactions['active_fellowships'];
        $path = drupal_get_normal_path('node/' . $active_nid);
        if (current_path() !== $path) {
          drupal_goto($path);
        }
      }
    }
  }

}
