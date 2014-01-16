<?php
/**
 * @file
 * Contains the fellowship argument default plugin.
 */

/**
 * Default argument plugin to provide a subsite as an option.
 */
class views_plugin_argument_default_fellowship extends views_plugin_argument_default {
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  /**
   * Only let users with administer content permissions set/modify this
   * default plugin.
   */
  function access() {
    return user_access('administer views');
  }

  function get_argument() {
    // set up variables to make it easier to reference during the argument.
    $view = &$this->view;
    $argument = &$this->argument;
    ob_start();
    $fellowship = _get_active_fellowship();

    ob_start();
    if(isset($fellowship->nid)) {
      $result = $fellowship->nid;
    }
    else {
      $result = 0;
    }
    ob_end_clean();
    return $result;
  }
}
