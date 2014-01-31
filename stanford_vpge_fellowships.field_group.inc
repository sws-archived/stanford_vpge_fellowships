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
  $field_group->identifier = 'group_fellowship_about|node|fellowship_funding|details';
  $field_group->group_name = 'group_fellowship_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'details';
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
  $export['group_fellowship_about|node|fellowship_funding|details'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'field_s_fellowship_about',
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
  $field_group->identifier = 'group_fellowship_apply|node|fellowship_funding|details';
  $field_group->group_name = 'group_fellowship_apply';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'details';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How To Apply',
    'weight' => '2',
    'children' => array(
      0 => 'field_fellowship_how_to_apply',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'How To Apply',
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
  $export['group_fellowship_apply|node|fellowship_funding|details'] = $field_group;

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
    'weight' => '13',
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
  $field_group->identifier = 'group_fellowship_configuration|node|fellowship_funding|form';
  $field_group->group_name = 'group_fellowship_configuration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_fellowship_funding_type',
      1 => 'field_area_of_focus',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Additional information and configuration for this fellowship.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_fellowship_configuration|node|fellowship_funding|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fellowship_contact|node|fellowship_funding|details';
  $field_group->group_name = 'group_fellowship_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'details';
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
  $export['group_fellowship_contact|node|fellowship_funding|details'] = $field_group;

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
    'weight' => '14',
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
  $field_group->identifier = 'group_fellowship_details|node|fellowship_funding|details';
  $field_group->group_name = 'group_fellowship_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'details';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'At a Glance',
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
      'label' => 'At a Glance',
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
  $export['group_fellowship_details|node|fellowship_funding|details'] = $field_group;

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
    'weight' => '17',
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
  $field_group->identifier = 'group_fellowship_funding|node|stanford_event|default';
  $field_group->group_name = 'group_fellowship_funding';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'This event is affiliated with:',
    'weight' => '10',
    'children' => array(
      0 => 'field_s_event_fellowship_funding',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'This event is affiliated with:',
      'instance_settings' => array(
        'classes' => 'header-striped',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fellowship_funding|node|stanford_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fellowship_partner|node|fellowship_funding|details';
  $field_group->group_name = 'group_fellowship_partner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'details';
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
  $export['group_fellowship_partner|node|fellowship_funding|details'] = $field_group;

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
    'weight' => '16',
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
  $field_group->identifier = 'group_fellowship_resources|node|fellowship_funding|details';
  $field_group->group_name = 'group_fellowship_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'details';
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
  $export['group_fellowship_resources|node|fellowship_funding|details'] = $field_group;

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
    'weight' => '15',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_fellowship_all|node|fellowship_funding|form';
  $field_group->group_name = 'group_s_fellowship_all';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'All Pages',
    'weight' => '1',
    'children' => array(
      0 => 'field_fellowship_short_title',
      1 => 'field_fellowship_tag_line',
      2 => 'field_s_felowship_apply_now',
      3 => 'field_s_fellowship_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'All Pages',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Fields and information that appear on all pages within the fellowship section.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_s_fellowship_all|node|fellowship_funding|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_fellowship_details|node|fellowship_funding|form';
  $field_group->group_name = 'group_s_fellowship_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details Page',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_fellowship_how_to_apply',
      2 => 'field_fellowship_resource',
      3 => 'field_fellowship_contact',
      4 => 'field_fellowship_person',
      5 => 'field_fellowship_partner',
      6 => 'field_s_fellowship_quote',
      7 => 'group_s_fellowship_glance',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details Page',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Fields and information specifically shown on the details page.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_s_fellowship_details|node|fellowship_funding|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_fellowship_glance|node|fellowship_funding|form';
  $field_group->group_name = 'group_s_fellowship_glance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_s_fellowship_details';
  $field_group->data = array(
    'label' => 'At a Glance',
    'weight' => '12',
    'children' => array(
      0 => 'field_fellowship_eligibility',
      1 => 'field_fellowship_app_type',
      2 => 'field_fellowship_number_awarded',
      3 => 'field_fellowship_duration',
      4 => 'field_fellowship_amount_awarded',
      5 => 'field_fellowship_deadline',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'At a Glance',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_fellowship_glance|node|fellowship_funding|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_fellowship_overview|node|fellowship_funding|form';
  $field_group->group_name = 'group_s_fellowship_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fellowship_funding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Overview Page',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_image_info',
      1 => 'field_s_fellowship_about',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Overview Page',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Fields and information specifically shown on the overview page.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_s_fellowship_overview|node|fellowship_funding|form'] = $field_group;

  return $export;
}
