<?php

//  ////////////////////////////////////////////////////////////////////////////
//  VIEWS PLUGINS //
//  ////////////////////////////////////////////////////////////////////////////

/**
 * Add active fellowship plugin option for views default argument handlers
 * @return $plugins An array of plugin information for use in views
 */
function stanford_vpge_fellowships_views_plugins() {
  $plugins = array();
  $plugins['argument validator'] = array(
    'subsite' => array(
      'title' => t('Active Fellowship'),
      'handler' => 'views_plugin_argument_validate_fellowship',
    ),
  );

  $plugins['argument default'] = array(
    'subsite' => array(
      'title' => t('Active Fellowship'),
      'handler' => 'views_plugin_argument_default_fellowship',
    ),
  );

  return $plugins;
}
