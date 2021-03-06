<?php
/**
 * @file
 * stanford_vpge_fellowships.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_vpge_fellowships_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_vpge_fellowships_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stanford_vpge_fellowships_node_info() {
  $items = array(
    'fellowship_funding' => array(
      'name' => t('Fellowship/Funding'),
      'base' => 'node_content',
      'description' => t('Use <em>Fellowship/Funding</em> for fellowships administered by the Office of the VPGE.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_view_mode_page_pattern_default().
 */
function stanford_vpge_fellowships_view_mode_page_pattern_default() {
  $vmp_config = array();

  $vmp_config[] = array(
    0 => array(
      'content_type' => 'fellowship_funding',
      'view_mode' => 'details',
      'url_pattern' => 'fellowships-funding/%/details',
      'entity_type' => 'node',
      'show_title' => '1',
      'title' => '[node:title] Details',
    ),
  );
  $vmp_config[] = array(
    0 => array(
      'content_type' => 'fellowship_funding',
      'view_mode' => 'full',
      'url_pattern' => '',
      'entity_type' => 'node',
      'show_title' => '0',
      'title' => '',
    ),
  );
  return $vmp_config;
}
