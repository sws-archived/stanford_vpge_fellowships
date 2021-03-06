<?php
/**
 * @file
 * stanford_vpge_fellowships.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_vpge_fellowships_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fellowship_funding_node';
  $context->description = 'Node pages for all fellowships and funding';
  $context->tag = 'Fellowships & Funding';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fellowship_funding' => 'fellowship_funding',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-stanford_events_views-block_9' => array(
          'module' => 'views',
          'delta' => 'stanford_events_views-block_9',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-stanford_events_views-block_10' => array(
          'module' => 'views',
          'delta' => 'stanford_events_views-block_10',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'ds_extras-s_fellowship_apply_now' => array(
          'module' => 'ds_extras',
          'delta' => 's_fellowship_apply_now',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-stanford_news-block_1' => array(
          'module' => 'views',
          'delta' => 'stanford_news-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Fellowships & Funding');
  t('Node pages for all fellowships and funding');
  $export['fellowship_funding_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fellowship_funding_page_details';
  $context->description = 'The layout for the details page of all fellowship nodes.';
  $context->tag = 'Fellowships & Funding';
  $context->conditions = array(
    'active_fellowships' => array(
      'values' => array(
        'any' => 'any',
      ),
    ),
    'path' => array(
      'values' => array(
        'fellowship*/details' => 'fellowship*/details',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-stanford_events_views-block_8' => array(
          'module' => 'views',
          'delta' => 'stanford_events_views-block_8',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-077f80deab4f169b24400598d5857274' => array(
          'module' => 'views',
          'delta' => '077f80deab4f169b24400598d5857274',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-d5e79122ee6ab0a12f8202567ffb3161' => array(
          'module' => 'views',
          'delta' => 'd5e79122ee6ab0a12f8202567ffb3161',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Fellowships & Funding');
  t('The layout for the details page of all fellowship nodes.');
  $export['fellowship_funding_page_details'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fellowship_funding_page_overview';
  $context->description = 'The layout for the overview page of all fellowship nodes.';
  $context->tag = 'Fellowships & Funding';
  $context->conditions = array(
    'active_fellowships' => array(
      'values' => array(
        'any' => 'any',
      ),
    ),
    'node' => array(
      'values' => array(
        'fellowship_funding' => 'fellowship_funding',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        '~*/details' => '~*/details',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-d40340aa456f4e5d832137bce1612c17' => array(
          'module' => 'views',
          'delta' => 'd40340aa456f4e5d832137bce1612c17',
          'region' => 'content_lower',
          'weight' => '-86',
        ),
        'views-077f80deab4f169b24400598d5857274' => array(
          'module' => 'views',
          'delta' => '077f80deab4f169b24400598d5857274',
          'region' => 'content_lower',
          'weight' => '-85',
        ),
        'views-d92ec030f7c713b631663602170f377e' => array(
          'module' => 'views',
          'delta' => 'd92ec030f7c713b631663602170f377e',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-stanford_events_views-block_9' => array(
          'module' => 'views',
          'delta' => 'stanford_events_views-block_9',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Fellowships & Funding');
  t('The layout for the overview page of all fellowship nodes.');

  $export['fellowship_funding_page_overview'] = $context;

  return $export;
}
