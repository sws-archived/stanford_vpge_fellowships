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
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
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
        'ds_extras-fellowship_funding_description' => array(
          'module' => 'ds_extras',
          'delta' => 'fellowship_funding_description',
          'region' => 'sidebar_first',
          'weight' => '-71',
        ),
        'bean-Fellowship-Information-Links-Sid' => array(
          'module' => 'bean',
          'delta' => 'Fellowship-Information-Links-Sid',
          'region' => 'sidebar_first',
          'weight' => '-70',
        ),
        'bean-Back-to-All-Fellowships' => array(
          'module' => 'bean',
          'delta' => 'Back-to-All-Fellowships',
          'region' => 'sidebar_first',
          'weight' => '-69',
        ),
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
        'views-stanford_news-block_1' => array(
          'module' => 'views',
          'delta' => 'stanford_news-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-fellowships_fellows-block' => array(
          'module' => 'views',
          'delta' => 'fellowships_fellows-block',
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
  $context->name = 'fellowships_diversity_initiatives';
  $context->description = 'Fellowships & Funding in Diversity Initiatives area of focus';
  $context->tag = 'Fellowships & Funding';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'diversity-initiatives/funding-opportunities' => 'diversity-initiatives/funding-opportunities',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fellowships_and_funding-block_1' => array(
          'module' => 'views',
          'delta' => 'fellowships_and_funding-block_1',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Fellowships & Funding');
  t('Fellowships & Funding in Diversity Initiatives area of focus');
  $export['fellowships_diversity_initiatives'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fellowships_funding';
  $context->description = 'Blocks that show up on the Fellowships & Funding landing page';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'fellowships-funding/overview' => 'fellowships-funding/overview',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-stanford_events_views-block_8' => array(
          'module' => 'views',
          'delta' => 'stanford_events_views-block_8',
          'region' => 'sidebar_first',
          'weight' => '5',
        ),
        'bean-Fellowships--Funding---Banner-Im' => array(
          'module' => 'bean',
          'delta' => 'Fellowships--Funding---Banner-Im',
          'region' => 'content',
          'weight' => '9',
        ),
        'bean-Fellowships--Funding---How-to-Fi' => array(
          'module' => 'bean',
          'delta' => 'Fellowships--Funding---How-to-Fi',
          'region' => 'content_row3',
          'weight' => '-7',
        ),
        'bean-Fellowships--Funding---Funding-R' => array(
          'module' => 'bean',
          'delta' => 'Fellowships--Funding---Funding-R',
          'region' => 'content_row3',
          'weight' => '-6',
        ),
        'bean-Fellowships--Funding---Major-Fel' => array(
          'module' => 'bean',
          'delta' => 'Fellowships--Funding---Major-Fel',
          'region' => 'content_row3',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks that show up on the Fellowships & Funding landing page');
  t('Landing Pages');
  $export['fellowships_funding'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fellowships_interdisciplinary_learning';
  $context->description = 'Fellowships & Funding in Interdisciplinary Learning area of focus';
  $context->tag = 'Fellowships & Funding';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'interdisciplinary-learning/funding' => 'interdisciplinary-learning/funding',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fellowships_and_funding-block_2' => array(
          'module' => 'views',
          'delta' => 'fellowships_and_funding-block_2',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Fellowships & Funding');
  t('Fellowships & Funding in Interdisciplinary Learning area of focus');
  $export['fellowships_interdisciplinary_learning'] = $context;

  return $export;
}
