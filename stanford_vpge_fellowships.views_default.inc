<?php
/**
 * @file
 * stanford_vpge_fellowships.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_vpge_fellowships_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fellowships_and_funding';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fellowships and Funding';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Fellowships & Funding Opportunities';
  $handler->display->display_options['css_class'] = 'views-row-lines';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_fellowship_funding_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_fellowship_tag_line' => 'title',
    'view_node' => 'title',
    'field_fellowship_eligibility' => 'field_fellowship_eligibility',
    'field_fellowship_app_type' => 'field_fellowship_app_type',
    'field_fellowship_deadline' => 'field_fellowship_deadline',
    'edit_node' => 'title',
    'field_fellowship_funding_type' => 'field_fellowship_funding_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_fellowship_tag_line' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fellowship_eligibility' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fellowship_app_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fellowship_deadline' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fellowship_funding_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Tag Line */
  $handler->display->display_options['fields']['field_fellowship_tag_line']['id'] = 'field_fellowship_tag_line';
  $handler->display->display_options['fields']['field_fellowship_tag_line']['table'] = 'field_data_field_fellowship_tag_line';
  $handler->display->display_options['fields']['field_fellowship_tag_line']['field'] = 'field_fellowship_tag_line';
  $handler->display->display_options['fields']['field_fellowship_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_fellowship_tag_line']['alter']['text'] = '<br />
[field_fellowship_tag_line]';
  $handler->display->display_options['fields']['field_fellowship_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<br />
[view_node]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Learn more';
  /* Field: Content: Eligibility */
  $handler->display->display_options['fields']['field_fellowship_eligibility']['id'] = 'field_fellowship_eligibility';
  $handler->display->display_options['fields']['field_fellowship_eligibility']['table'] = 'field_data_field_fellowship_eligibility';
  $handler->display->display_options['fields']['field_fellowship_eligibility']['field'] = 'field_fellowship_eligibility';
  $handler->display->display_options['fields']['field_fellowship_eligibility']['alter']['text'] = 'For [field_fellowship_eligibility]';
  $handler->display->display_options['fields']['field_fellowship_eligibility']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fellowship_eligibility']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Application Type */
  $handler->display->display_options['fields']['field_fellowship_app_type']['id'] = 'field_fellowship_app_type';
  $handler->display->display_options['fields']['field_fellowship_app_type']['table'] = 'field_data_field_fellowship_app_type';
  $handler->display->display_options['fields']['field_fellowship_app_type']['field'] = 'field_fellowship_app_type';
  $handler->display->display_options['fields']['field_fellowship_app_type']['label'] = 'Process';
  $handler->display->display_options['fields']['field_fellowship_app_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fellowship_app_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Application Period */
  $handler->display->display_options['fields']['field_fellowship_deadline']['id'] = 'field_fellowship_deadline';
  $handler->display->display_options['fields']['field_fellowship_deadline']['table'] = 'field_data_field_fellowship_deadline';
  $handler->display->display_options['fields']['field_fellowship_deadline']['field'] = 'field_fellowship_deadline';
  $handler->display->display_options['fields']['field_fellowship_deadline']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<br />
[edit_node]';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Type of Funding */
  $handler->display->display_options['fields']['field_fellowship_funding_type']['id'] = 'field_fellowship_funding_type';
  $handler->display->display_options['fields']['field_fellowship_funding_type']['table'] = 'field_data_field_fellowship_funding_type';
  $handler->display->display_options['fields']['field_fellowship_funding_type']['field'] = 'field_fellowship_funding_type';
  $handler->display->display_options['fields']['field_fellowship_funding_type']['label'] = '';
  $handler->display->display_options['fields']['field_fellowship_funding_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fellowship_funding_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fellowship_funding_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_fellowship_funding_type']['delta_offset'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fellowship_funding' => 'fellowship_funding',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  /* Filter criterion: Content: Eligibility (field_fellowship_eligibility) */
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['id'] = 'field_fellowship_eligibility_tid';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['table'] = 'field_data_field_fellowship_eligibility';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['field'] = 'field_fellowship_eligibility_tid';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['expose']['operator_id'] = 'field_fellowship_eligibility_tid_op';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['expose']['label'] = 'Filter by eligibility';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['expose']['operator'] = 'field_fellowship_eligibility_tid_op';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['expose']['identifier'] = 'field_fellowship_eligibility_tid';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['vocabulary'] = 'eligibility';
  /* Filter criterion: Content: Application Type (field_fellowship_app_type) */
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['id'] = 'field_fellowship_app_type_tid';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['table'] = 'field_data_field_fellowship_app_type';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['field'] = 'field_fellowship_app_type_tid';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['expose']['operator_id'] = 'field_fellowship_app_type_tid_op';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['expose']['label'] = 'Filter by process';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['expose']['operator'] = 'field_fellowship_app_type_tid_op';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['expose']['identifier'] = 'field_fellowship_app_type_tid';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['vocabulary'] = 'application_type';
  /* Filter criterion: Content: Type of Funding (field_fellowship_funding_type) */
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['id'] = 'field_fellowship_funding_type_tid';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['table'] = 'field_data_field_fellowship_funding_type';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['field'] = 'field_fellowship_funding_type_tid';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['expose']['operator_id'] = 'field_fellowship_funding_type_tid_op';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['expose']['label'] = 'Filter by funding type';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['expose']['operator'] = 'field_fellowship_funding_type_tid_op';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['expose']['identifier'] = 'field_fellowship_funding_type_tid';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['vocabulary'] = 'funding_type';
  /* Filter criterion: Content: Area of Focus (field_area_of_focus) */
  $handler->display->display_options['filters']['field_area_of_focus_tid']['id'] = 'field_area_of_focus_tid';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['table'] = 'field_data_field_area_of_focus';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['field'] = 'field_area_of_focus_tid';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_area_of_focus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['operator_id'] = 'field_area_of_focus_tid_op';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['label'] = 'Area of Focus (field_area_of_focus)';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['operator'] = 'field_area_of_focus_tid_op';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['identifier'] = 'field_area_of_focus_tid';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['vocabulary'] = 'areas_of_focus';

  /* Display: All Fellowships & Funding */
  $handler = $view->new_display('page', 'All Fellowships & Funding', 'page_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fellowship_funding' => 'fellowship_funding',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  /* Filter criterion: Content: Eligibility (field_fellowship_eligibility) */
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['id'] = 'field_fellowship_eligibility_tid';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['table'] = 'field_data_field_fellowship_eligibility';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['field'] = 'field_fellowship_eligibility_tid';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['expose']['operator_id'] = 'field_fellowship_eligibility_tid_op';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['expose']['label'] = 'Filter by eligibility';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['expose']['operator'] = 'field_fellowship_eligibility_tid_op';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['expose']['identifier'] = 'field_fellowship_eligibility_tid';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_fellowship_eligibility_tid']['vocabulary'] = 'eligibility';
  /* Filter criterion: Content: Application Type (field_fellowship_app_type) */
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['id'] = 'field_fellowship_app_type_tid';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['table'] = 'field_data_field_fellowship_app_type';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['field'] = 'field_fellowship_app_type_tid';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['expose']['operator_id'] = 'field_fellowship_app_type_tid_op';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['expose']['label'] = 'Filter by process';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['expose']['operator'] = 'field_fellowship_app_type_tid_op';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['expose']['identifier'] = 'field_fellowship_app_type_tid';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_fellowship_app_type_tid']['vocabulary'] = 'application_type';
  /* Filter criterion: Content: Type of Funding (field_fellowship_funding_type) */
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['id'] = 'field_fellowship_funding_type_tid';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['table'] = 'field_data_field_fellowship_funding_type';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['field'] = 'field_fellowship_funding_type_tid';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['expose']['operator_id'] = 'field_fellowship_funding_type_tid_op';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['expose']['label'] = 'Filter by funding type';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['expose']['operator'] = 'field_fellowship_funding_type_tid_op';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['expose']['identifier'] = 'field_fellowship_funding_type_tid';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_fellowship_funding_type_tid']['vocabulary'] = 'funding_type';
  /* Filter criterion: Content: Area of Focus (field_area_of_focus) */
  $handler->display->display_options['filters']['field_area_of_focus_tid']['id'] = 'field_area_of_focus_tid';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['table'] = 'field_data_field_area_of_focus';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['field'] = 'field_area_of_focus_tid';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_area_of_focus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['operator_id'] = 'field_area_of_focus_tid_op';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['label'] = 'Filter by area of focus';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['operator'] = 'field_area_of_focus_tid_op';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['identifier'] = 'field_area_of_focus_tid';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_area_of_focus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['vocabulary'] = 'areas_of_focus';
  $handler->display->display_options['path'] = 'all-fellowships-funding';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Fellowships & Funding';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Fellowships - Diversity Initiatives */
  $handler = $view->new_display('block', 'Fellowships - Diversity Initiatives', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all Fellowships';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fellowship_funding' => 'fellowship_funding',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Area of Focus (field_area_of_focus) */
  $handler->display->display_options['filters']['field_area_of_focus_tid']['id'] = 'field_area_of_focus_tid';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['table'] = 'field_data_field_area_of_focus';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['field'] = 'field_area_of_focus_tid';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['value'] = array(
    27 => '27',
  );
  $handler->display->display_options['filters']['field_area_of_focus_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['operator_id'] = 'field_area_of_focus_tid_op';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['label'] = 'Filter by area of focus';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['operator'] = 'field_area_of_focus_tid_op';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['identifier'] = 'field_area_of_focus_tid';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_area_of_focus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['vocabulary'] = 'areas_of_focus';

  /* Display: Fellowships - Interdisciplinary Learning */
  $handler = $view->new_display('block', 'Fellowships - Interdisciplinary Learning', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all Fellowships';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fellowship_funding' => 'fellowship_funding',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Area of Focus (field_area_of_focus) */
  $handler->display->display_options['filters']['field_area_of_focus_tid']['id'] = 'field_area_of_focus_tid';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['table'] = 'field_data_field_area_of_focus';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['field'] = 'field_area_of_focus_tid';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['value'] = array(
    31 => '31',
  );
  $handler->display->display_options['filters']['field_area_of_focus_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['operator_id'] = 'field_area_of_focus_tid_op';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['label'] = 'Filter by area of focus';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['operator'] = 'field_area_of_focus_tid_op';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['identifier'] = 'field_area_of_focus_tid';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_area_of_focus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_of_focus_tid']['vocabulary'] = 'areas_of_focus';
  $export['fellowships_and_funding'] = $view;

  $view = new view();
  $view->name = 'fellowships_and_funding_manage';
  $view->description = 'View, edit, and delete your site\'s content.';
  $view->tag = 'admin';
  $view->base_table = 'node';
  $view->human_name = 'Fellowships and Funding: Manage';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Fellowships and Funding Content';
  $handler->display->display_options['css_class'] = 'admin-views-view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_s_image_info' => 'field_s_image_info',
    'path' => 'path',
    'field_fellowship_short_title' => 'field_fellowship_short_title',
    'timestamp' => 'field_fellowship_short_title',
    'changed' => 'changed',
    'status' => 'status',
    'field_fellowship_funding_type' => 'field_fellowship_funding_type',
    'field_area_of_focus' => 'field_area_of_focus',
    'field_fellowship_eligibility' => 'field_fellowship_eligibility',
    'field_fellowship_app_type' => 'field_fellowship_app_type',
    'field_fellowship_deadline' => 'field_fellowship_deadline',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'view_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_image_info' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fellowship_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fellowship_funding_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_area_of_focus' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fellowship_eligibility' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fellowship_app_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fellowship_deadline' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'forums' => 0,
    'tags' => 0,
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change author',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Stick',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unstick',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Modify Deadline',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'fellowship_funding::field_fellowship_deadline' => 'fellowship_funding::field_fellowship_deadline',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Promote to front page',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Publish',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Demote from front page',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unpublish',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_thumbnail_square',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_fellowship_short_title']['id'] = 'field_fellowship_short_title';
  $handler->display->display_options['fields']['field_fellowship_short_title']['table'] = 'field_data_field_fellowship_short_title';
  $handler->display->display_options['fields']['field_fellowship_short_title']['field'] = 'field_fellowship_short_title';
  $handler->display->display_options['fields']['field_fellowship_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_fellowship_short_title']['alter']['path'] = '[path]';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = ' New';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Type of Funding */
  $handler->display->display_options['fields']['field_fellowship_funding_type']['id'] = 'field_fellowship_funding_type';
  $handler->display->display_options['fields']['field_fellowship_funding_type']['table'] = 'field_data_field_fellowship_funding_type';
  $handler->display->display_options['fields']['field_fellowship_funding_type']['field'] = 'field_fellowship_funding_type';
  $handler->display->display_options['fields']['field_fellowship_funding_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_fellowship_funding_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fellowship_funding_type']['multi_type'] = 'ul';
  /* Field: Content: Area of Focus */
  $handler->display->display_options['fields']['field_area_of_focus']['id'] = 'field_area_of_focus';
  $handler->display->display_options['fields']['field_area_of_focus']['table'] = 'field_data_field_area_of_focus';
  $handler->display->display_options['fields']['field_area_of_focus']['field'] = 'field_area_of_focus';
  $handler->display->display_options['fields']['field_area_of_focus']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_area_of_focus']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_area_of_focus']['multi_type'] = 'ul';
  /* Field: Content: Eligibility */
  $handler->display->display_options['fields']['field_fellowship_eligibility']['id'] = 'field_fellowship_eligibility';
  $handler->display->display_options['fields']['field_fellowship_eligibility']['table'] = 'field_data_field_fellowship_eligibility';
  $handler->display->display_options['fields']['field_fellowship_eligibility']['field'] = 'field_fellowship_eligibility';
  $handler->display->display_options['fields']['field_fellowship_eligibility']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Application Type */
  $handler->display->display_options['fields']['field_fellowship_app_type']['id'] = 'field_fellowship_app_type';
  $handler->display->display_options['fields']['field_fellowship_app_type']['table'] = 'field_data_field_fellowship_app_type';
  $handler->display->display_options['fields']['field_fellowship_app_type']['field'] = 'field_fellowship_app_type';
  $handler->display->display_options['fields']['field_fellowship_app_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Application Period */
  $handler->display->display_options['fields']['field_fellowship_deadline']['id'] = 'field_fellowship_deadline';
  $handler->display->display_options['fields']['field_fellowship_deadline']['table'] = 'field_data_field_fellowship_deadline';
  $handler->display->display_options['fields']['field_fellowship_deadline']['field'] = 'field_fellowship_deadline';
  $handler->display->display_options['fields']['field_fellowship_deadline']['label'] = 'Deadline';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'NID';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[edit_node] |';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[view_node] |';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = ' View';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = ' Delete';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'fellowship_funding' => 'fellowship_funding',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/manage/fellowship_funding';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Fellowships & Funding';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-manage-content-by-type';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['fellowships_and_funding_manage'] = $view;

  $view = new view();
  $view->name = 'fellowships_fellows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fellowships Fellows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fellowships Fellows';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_fellow_profile' => 'field_fellow_profile',
    'field_fellow_fellowship_year' => 'field_fellow_fellowship_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_fellow_profile' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fellow_fellowship_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: fellowship_Fellows (field_fellowship_fellows) */
  $handler->display->display_options['relationships']['field_fellowship_fellows_value']['id'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['relationships']['field_fellowship_fellows_value']['table'] = 'field_data_field_fellowship_fellows';
  $handler->display->display_options['relationships']['field_fellowship_fellows_value']['field'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['relationships']['field_fellowship_fellows_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_fellowship_fellows_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_fellow_profile_field_collection_item']['id'] = 'reverse_field_fellow_profile_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_fellow_profile_field_collection_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_fellow_profile_field_collection_item']['field'] = 'reverse_field_fellow_profile_field_collection_item';
  /* Field: Field collection item: Fellow Profile */
  $handler->display->display_options['fields']['field_fellow_profile']['id'] = 'field_fellow_profile';
  $handler->display->display_options['fields']['field_fellow_profile']['table'] = 'field_data_field_fellow_profile';
  $handler->display->display_options['fields']['field_fellow_profile']['field'] = 'field_fellow_profile';
  $handler->display->display_options['fields']['field_fellow_profile']['relationship'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['fields']['field_fellow_profile']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field collection item: Fellowship Year */
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['id'] = 'field_fellow_fellowship_year';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['table'] = 'field_data_field_fellow_fellowship_year';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['field'] = 'field_fellow_fellowship_year';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['relationship'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Field collection item: Fellowship Year (field_fellow_fellowship_year) */
  $handler->display->display_options['sorts']['field_fellow_fellowship_year_value']['id'] = 'field_fellow_fellowship_year_value';
  $handler->display->display_options['sorts']['field_fellow_fellowship_year_value']['table'] = 'field_data_field_fellow_fellowship_year';
  $handler->display->display_options['sorts']['field_fellow_fellowship_year_value']['field'] = 'field_fellow_fellowship_year_value';
  $handler->display->display_options['sorts']['field_fellow_fellowship_year_value']['relationship'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['sorts']['field_fellow_fellowship_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Fellowships By Year */
  $handler = $view->new_display('page', 'Fellowships By Year', 'page_1');
  $handler->display->display_options['display_description'] = 'All Fellowships and Fellows Grouped By Year';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_fellow_fellowship_year',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_fellow_profile' => 'field_fellow_profile',
    'field_fellow_fellowship_year' => 'field_fellow_fellowship_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_fellow_profile' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fellow_fellowship_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Fellow Profile */
  $handler->display->display_options['fields']['field_fellow_profile']['id'] = 'field_fellow_profile';
  $handler->display->display_options['fields']['field_fellow_profile']['table'] = 'field_data_field_fellow_profile';
  $handler->display->display_options['fields']['field_fellow_profile']['field'] = 'field_fellow_profile';
  $handler->display->display_options['fields']['field_fellow_profile']['relationship'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['fields']['field_fellow_profile']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Fellowship';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Fellowship Year */
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['id'] = 'field_fellow_fellowship_year';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['table'] = 'field_data_field_fellow_fellowship_year';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['field'] = 'field_fellow_fellowship_year';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['relationship'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'fellowships/fellows-by-year';
  $export['fellowships_fellows'] = $view;

  $view = new view();
  $view->name = 'people_fellowships';
  $view->description = 'Views for the person content type. A list of fellowships the person belongs to.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'People Fellowships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People Fellowships';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: fellowship_Fellows (field_fellowship_fellows) */
  $handler->display->display_options['relationships']['field_fellowship_fellows_value']['id'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['relationships']['field_fellowship_fellows_value']['table'] = 'field_data_field_fellowship_fellows';
  $handler->display->display_options['relationships']['field_fellowship_fellows_value']['field'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['relationships']['field_fellowship_fellows_value']['delta'] = '-1';
  /* Relationship: Field collection item: Entity with the fellowship_Fellows (field_fellowship_fellows) */
  $handler->display->display_options['relationships']['field_fellowship_fellows_node']['id'] = 'field_fellowship_fellows_node';
  $handler->display->display_options['relationships']['field_fellowship_fellows_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_fellowship_fellows_node']['field'] = 'field_fellowship_fellows_node';
  $handler->display->display_options['relationships']['field_fellowship_fellows_node']['relationship'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['relationships']['field_fellowship_fellows_node']['required'] = TRUE;
  /* Field: Field collection item: Fellowship Year */
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['id'] = 'field_fellow_fellowship_year';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['table'] = 'field_data_field_fellow_fellowship_year';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['field'] = 'field_fellow_fellowship_year';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['relationship'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_fellow_fellowship_year']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_fellowship_fellows_node';
  /* Sort criterion: Field collection item: Fellowship Year (field_fellow_fellowship_year) */
  $handler->display->display_options['sorts']['field_fellow_fellowship_year_value']['id'] = 'field_fellow_fellowship_year_value';
  $handler->display->display_options['sorts']['field_fellow_fellowship_year_value']['table'] = 'field_data_field_fellow_fellowship_year';
  $handler->display->display_options['sorts']['field_fellow_fellowship_year_value']['field'] = 'field_fellow_fellowship_year_value';
  $handler->display->display_options['sorts']['field_fellow_fellowship_year_value']['relationship'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['sorts']['field_fellow_fellowship_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field collection item: Fellow Profile (field_fellow_profile) */
  $handler->display->display_options['arguments']['field_fellow_profile_target_id']['id'] = 'field_fellow_profile_target_id';
  $handler->display->display_options['arguments']['field_fellow_profile_target_id']['table'] = 'field_data_field_fellow_profile';
  $handler->display->display_options['arguments']['field_fellow_profile_target_id']['field'] = 'field_fellow_profile_target_id';
  $handler->display->display_options['arguments']['field_fellow_profile_target_id']['relationship'] = 'field_fellowship_fellows_value';
  $handler->display->display_options['arguments']['field_fellow_profile_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_fellow_profile_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_fellow_profile_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fellow_profile_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fellow_profile_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['people_fellowships'] = $view;

  return $export;
}
