<?php
/**
 * @file
 * stanford_vpge_fellowships.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_vpge_fellowships_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|fellowship_funding|details';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'fellowship_funding';
  $ds_layout->view_mode = 'details';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_fellowship_details',
        1 => 'group_fellowship_about',
        2 => 'group_fellowship_apply',
        3 => 'body',
        4 => 'group_fellowship_contact',
        5 => 'group_fellowship_resources',
        6 => 'group_fellowship_partner',
        7 => 'field_fellowship_person',
        8 => 'field_fellowship_contact',
        9 => 'field_fellowship_how_to_apply',
        10 => 'field_fellowship_resource',
        11 => 'field_fellowship_partner',
        12 => 'field_fellowship_app_type',
        13 => 'field_fellowship_eligibility',
        14 => 'field_fellowship_deadline',
        15 => 'field_fellowship_number_awarded',
        16 => 'field_fellowship_duration',
        17 => 'field_fellowship_amount_awarded',
      ),
    ),
    'fields' => array(
      'group_fellowship_details' => 'ds_content',
      'group_fellowship_about' => 'ds_content',
      'group_fellowship_apply' => 'ds_content',
      'body' => 'ds_content',
      'group_fellowship_contact' => 'ds_content',
      'group_fellowship_resources' => 'ds_content',
      'group_fellowship_partner' => 'ds_content',
      'field_fellowship_person' => 'ds_content',
      'field_fellowship_contact' => 'ds_content',
      'field_fellowship_how_to_apply' => 'ds_content',
      'field_fellowship_resource' => 'ds_content',
      'field_fellowship_partner' => 'ds_content',
      'field_fellowship_app_type' => 'ds_content',
      'field_fellowship_eligibility' => 'ds_content',
      'field_fellowship_deadline' => 'ds_content',
      'field_fellowship_number_awarded' => 'ds_content',
      'field_fellowship_duration' => 'ds_content',
      'field_fellowship_amount_awarded' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|fellowship_funding|details'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|fellowship_funding|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'fellowship_funding';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_s_fellowship_image',
      ),
      's_fellowship_apply_now' => array(
        1 => 'field_s_felowship_apply_now',
      ),
      'fellowship_about_fellowship' => array(
        2 => 'group_fellowship_about',
        3 => 'field_s_fellowship_about',
      ),
    ),
    'fields' => array(
      'field_s_fellowship_image' => 'ds_content',
      'field_s_felowship_apply_now' => 's_fellowship_apply_now',
      'group_fellowship_about' => 'fellowship_about_fellowship',
      'field_s_fellowship_about' => 'fellowship_about_fellowship',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|fellowship_funding|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function stanford_vpge_fellowships_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'details';
  $ds_view_mode->label = 'Details';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['details'] = $ds_view_mode;

  return $export;
}
