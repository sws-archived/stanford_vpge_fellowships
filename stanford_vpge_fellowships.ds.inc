<?php
/**
 * @file
 * stanford_vpge_fellowships.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_vpge_fellowships_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|fellowship_funding|details';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'fellowship_funding';
  $ds_fieldsetting->view_mode = 'details';
  $ds_fieldsetting->settings = array(
    'author' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'ds_post_date_stanford_time',
    ),
  );
  $export['node|fellowship_funding|details'] = $ds_fieldsetting;

  return $export;
}

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
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_s_image_info',
        1 => 'field_fellowship_resource',
        2 => 'field_fellowship_tag_line',
        3 => 'field_fellowship_contact',
        4 => 'field_fellowship_deadline',
        5 => 'field_fellowship_amount_awarded',
        6 => 'field_fellowship_duration',
        7 => 'field_fellowship_eligibility',
      ),
      'right' => array(
        8 => 'field_fellowship_short_title',
        9 => 'field_fellowship_app_type',
        10 => 'field_fellowship_how_to_apply',
        11 => 'field_fellowship_number_awarded',
        12 => 'body',
        13 => 'author',
        14 => 'post_date',
      ),
    ),
    'fields' => array(
      'field_s_image_info' => 'left',
      'field_fellowship_resource' => 'left',
      'field_fellowship_tag_line' => 'left',
      'field_fellowship_contact' => 'left',
      'field_fellowship_deadline' => 'left',
      'field_fellowship_amount_awarded' => 'left',
      'field_fellowship_duration' => 'left',
      'field_fellowship_eligibility' => 'left',
      'field_fellowship_short_title' => 'right',
      'field_fellowship_app_type' => 'right',
      'field_fellowship_how_to_apply' => 'right',
      'field_fellowship_number_awarded' => 'right',
      'body' => 'right',
      'author' => 'right',
      'post_date' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => '',
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
        0 => 'group_fellowship_details',
        1 => 'group_fellowship_about',
        2 => 'field_fellowship_app_type',
        3 => 'field_fellowship_eligibility',
        4 => 'group_fellowship_apply',
        5 => 'field_fellowship_deadline',
        6 => 'group_fellowship_contact',
        7 => 'group_fellowship_resource',
        9 => 'field_fellowship_number_awarded',
        11 => 'field_fellowship_duration',
        12 => 'field_fellowship_amount_awarded',
        14 => 'field_fellowship_how_to_apply',
        15 => 'field_fellowship_contact',
        16 => 'body',
        17 => 'field_fellowship_resource',
      ),
      'fellowship_funding_description' => array(
        8 => 'field_fellowship_short_title',
        10 => 'field_s_image_info',
        13 => 'field_fellowship_tag_line',
      ),
    ),
    'fields' => array(
      'group_fellowship_details' => 'ds_content',
      'group_fellowship_about' => 'ds_content',
      'field_fellowship_app_type' => 'ds_content',
      'field_fellowship_eligibility' => 'ds_content',
      'group_fellowship_apply' => 'ds_content',
      'field_fellowship_deadline' => 'ds_content',
      'group_fellowship_contact' => 'ds_content',
      'group_fellowship_resource' => 'ds_content',
      'field_fellowship_short_title' => 'fellowship_funding_description',
      'field_fellowship_number_awarded' => 'ds_content',
      'field_s_image_info' => 'fellowship_funding_description',
      'field_fellowship_duration' => 'ds_content',
      'field_fellowship_amount_awarded' => 'ds_content',
      'field_fellowship_tag_line' => 'fellowship_funding_description',
      'field_fellowship_how_to_apply' => 'ds_content',
      'field_fellowship_contact' => 'ds_content',
      'body' => 'ds_content',
      'field_fellowship_resource' => 'ds_content',
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
