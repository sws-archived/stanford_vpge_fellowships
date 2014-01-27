<?php
/**
 * @file
 * stanford_vpge_fellowships.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_vpge_fellowships_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__fellowship_funding';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'taxonomy' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'details' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '21',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__fellowship_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_fellowship_funding';
  $strongarm->value = array();
  $export['menu_options_fellowship_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_fellowship_funding';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_fellowship_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_fellowship_funding_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'additional_settings' => array(
      'region' => 'main',
      'weight' => '18',
      'has_required' => FALSE,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'main',
      'weight' => '19',
      'has_required' => FALSE,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'body' => array(
      'region' => 'main',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'About',
      'hidden' => 0,
    ),
    'field_fellowship_short_title' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Short Title',
    ),
    'field_fellowship_funding_type' => array(
      'region' => 'main',
      'weight' => '14',
      'has_required' => TRUE,
      'title' => 'Type of Funding',
    ),
    'field_area_of_focus' => array(
      'region' => 'main',
      'weight' => '15',
      'has_required' => TRUE,
      'title' => 'Area of Focus',
    ),
    'field_fellowship_eligibility' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => TRUE,
      'title' => 'Eligibility',
    ),
    'field_fellowship_app_type' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Application Type',
      'hidden' => 0,
    ),
    'field_fellowship_how_to_apply' => array(
      'region' => 'main',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'How to Apply',
      'hidden' => 0,
    ),
    'field_fellowship_number_awarded' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Number Awarded',
      'hidden' => 0,
    ),
    'field_fellowship_duration' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Duration',
      'hidden' => 0,
    ),
    'field_fellowship_amount_awarded' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Amount Awarded',
      'hidden' => 0,
    ),
    'field_fellowship_resource' => array(
      'region' => 'main',
      'weight' => '16',
      'has_required' => FALSE,
      'title' => 'Resource',
      'hidden' => 0,
    ),
    'field_s_image_info' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Image',
      'hidden' => 0,
    ),
    'field_fellowship_tag_line' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Tag Line',
      'hidden' => 0,
    ),
    'field_fellowship_contact' => array(
      'region' => 'main',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Contact',
      'hidden' => 0,
    ),
    'field_fellowship_deadline' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Application Period',
      'hidden' => 0,
    ),
    'field_fellowship_person' => array(
      'region' => 'main',
      'weight' => '13',
      'has_required' => FALSE,
      'title' => 'Contact Person',
      'hidden' => 0,
    ),
    'field_fellowship_partner' => array(
      'region' => 'main',
      'weight' => '17',
      'has_required' => FALSE,
      'title' => 'Partner',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_fellowship_funding_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fellowship_funding';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_fellowship_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_fellowship_funding';
  $strongarm->value = '1';
  $export['node_preview_fellowship_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fellowship_funding';
  $strongarm->value = 0;
  $export['node_submitted_fellowship_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_fellowship_funding_pattern';
  $strongarm->value = 'fellowships-funding/[node:title]';
  $export['pathauto_node_fellowship_funding_pattern'] = $strongarm;

  return $export;
}
