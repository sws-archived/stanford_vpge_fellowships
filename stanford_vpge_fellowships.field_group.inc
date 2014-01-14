<?php
/**
 * @file
 * stanford_vpge_fellowships.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_vpge_fellowships_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fellowship_about|node|fellowship_funding|full';
  $field_group->group_name = 'group_fellowship_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '1',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'About',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fellowship_about|node|fellowship_funding|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fellowship_apply|node|fellowship_funding|full';
  $field_group->group_name = 'group_fellowship_apply';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How to apply',
    'weight' => '2',
    'children' => array(
      0 => 'field_fellowship_how_to_apply',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'How to apply',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fellowship_apply|node|fellowship_funding|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fellowship_contact|node|fellowship_funding|full';
  $field_group->group_name = 'group_fellowship_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '3',
    'children' => array(
      0 => 'field_fellowship_contact',
      1 => 'field_fellowship_person',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fellowship_contact|node|fellowship_funding|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fellowship_details|node|fellowship_funding|full';
  $field_group->group_name = 'group_fellowship_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'At a glance',
    'weight' => '0',
    'children' => array(
      0 => 'field_fellowship_eligibility',
      1 => 'field_fellowship_app_type',
      2 => 'field_fellowship_number_awarded',
      3 => 'field_fellowship_duration',
      4 => 'field_fellowship_amount_awarded',
      5 => 'field_fellowship_deadline',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'At a glance',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fellowship_details|node|fellowship_funding|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fellowship_partner|node|fellowship_funding|full';
  $field_group->group_name = 'group_fellowship_partner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Partners',
    'weight' => '5',
    'children' => array(
      0 => 'field_fellowship_partner',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Partners',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fellowship_partner|node|fellowship_funding|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fellowship_resource|node|fellowship_funding|full';
  $field_group->group_name = 'group_fellowship_resource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '4',
    'children' => array(
      0 => 'field_fellowship_resource',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resources',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fellowship_resource|node|fellowship_funding|full'] = $field_group;

  return $export;
}
