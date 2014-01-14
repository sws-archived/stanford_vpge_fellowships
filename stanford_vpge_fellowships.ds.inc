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
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_fellowship_short_title',
        1 => 'field_s_image_info',
        2 => 'field_fellowship_tag_line',
        3 => 'field_fellowship_number_awarded',
        4 => 'field_fellowship_duration',
        5 => 'field_fellowship_amount_awarded',
        6 => 'field_fellowship_eligibility',
        7 => 'field_fellowship_app_type',
        8 => 'field_fellowship_deadline',
        9 => 'body',
        10 => 'field_fellowship_how_to_apply',
      ),
      'left' => array(
        11 => 'field_fellowship_resource',
        12 => 'field_fellowship_partner',
      ),
      'right' => array(
        13 => 'field_fellowship_contact',
        14 => 'field_fellowship_person',
        15 => 'field_s_felowship_apply_now',
      ),
    ),
    'fields' => array(
      'field_fellowship_short_title' => 'header',
      'field_s_image_info' => 'header',
      'field_fellowship_tag_line' => 'header',
      'field_fellowship_number_awarded' => 'header',
      'field_fellowship_duration' => 'header',
      'field_fellowship_amount_awarded' => 'header',
      'field_fellowship_eligibility' => 'header',
      'field_fellowship_app_type' => 'header',
      'field_fellowship_deadline' => 'header',
      'body' => 'header',
      'field_fellowship_how_to_apply' => 'header',
      'field_fellowship_resource' => 'left',
      'field_fellowship_partner' => 'left',
      'field_fellowship_contact' => 'right',
      'field_fellowship_person' => 'right',
      'field_s_felowship_apply_now' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
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
        0 => 'group_fellowship_details',
        1 => 'field_fellowship_person',
        2 => 'field_fellowship_contact',
        3 => 'group_fellowship_about',
        4 => 'field_fellowship_app_type',
        5 => 'field_fellowship_eligibility',
        6 => 'group_fellowship_apply',
        7 => 'group_fellowship_contact',
        8 => 'field_fellowship_deadline',
        9 => 'group_fellowship_resource',
        10 => 'group_fellowship_partner',
        11 => 'field_fellowship_number_awarded',
        12 => 'field_fellowship_duration',
        15 => 'field_fellowship_amount_awarded',
        17 => 'field_fellowship_how_to_apply',
        19 => 'body',
        20 => 'field_fellowship_resource',
        21 => 'field_fellowship_partner',
      ),
      'fellowship_funding_description' => array(
        13 => 'field_fellowship_short_title',
        14 => 'field_s_image_info',
        16 => 'field_fellowship_tag_line',
      ),
      's_fellowship_apply_now' => array(
        18 => 'field_s_felowship_apply_now',
      ),
    ),
    'fields' => array(
      'group_fellowship_details' => 'ds_content',
      'field_fellowship_person' => 'ds_content',
      'field_fellowship_contact' => 'ds_content',
      'group_fellowship_about' => 'ds_content',
      'field_fellowship_app_type' => 'ds_content',
      'field_fellowship_eligibility' => 'ds_content',
      'group_fellowship_apply' => 'ds_content',
      'group_fellowship_contact' => 'ds_content',
      'field_fellowship_deadline' => 'ds_content',
      'group_fellowship_resource' => 'ds_content',
      'group_fellowship_partner' => 'ds_content',
      'field_fellowship_number_awarded' => 'ds_content',
      'field_fellowship_duration' => 'ds_content',
      'field_fellowship_short_title' => 'fellowship_funding_description',
      'field_s_image_info' => 'fellowship_funding_description',
      'field_fellowship_amount_awarded' => 'ds_content',
      'field_fellowship_tag_line' => 'fellowship_funding_description',
      'field_fellowship_how_to_apply' => 'ds_content',
      'field_s_felowship_apply_now' => 's_fellowship_apply_now',
      'body' => 'ds_content',
      'field_fellowship_resource' => 'ds_content',
      'field_fellowship_partner' => 'ds_content',
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
