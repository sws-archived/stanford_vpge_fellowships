<?php
/**
 * @file
 * Contains the php code argument validator plugin.
 */

/**
 * Provide code to validate whether or not an argument is ok.
 *
 * @ingroup views_argument_validate_plugins
 */
class views_plugin_argument_validate_fellowship extends views_plugin_argument_validate {
  function option_definition() {
    $options = parent::option_definition();
   // $options['subsite'] = array('default' => '0');

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  /**
   * Only let users with PHP block visibility permissions set/modify this
   * validate plugin.
   */
  function access() {
    return user_access('administer views');
  }

  function validate_argument($argument) {
    // set up variables to make it easier to reference during the argument.
    $view = &$this->view;
    $handler = &$this->argument;
    $subsite = _get_active_fellowship();

    if(isset($fellowship->nid)) {
      $result = $fellowship->nid;
    }
    else {
      $result = 0;
    }
    return $result;
  }
}
