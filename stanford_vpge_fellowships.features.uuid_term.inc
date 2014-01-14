<?php
/**
 * @file
 * stanford_vpge_fellowships.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function stanford_vpge_fellowships_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Fellowship',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '22ff648a-370c-4f11-9135-efb4ff7c6943',
    'vocabulary_machine_name' => 'funding_type',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'funding-type/fellowship',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Doctoral Students',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '355c2666-b214-4a99-8aa3-1166b59ddcc9',
    'vocabulary_machine_name' => 'eligibility',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'eligibility/doctoral-students',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Professional Development',
    'description' => '',
    'format' => 'content_editor_text_format',
    'weight' => '0',
    'uuid' => '35e06b46-919c-4093-8ed1-86a65ddffcd2',
    'vocabulary_machine_name' => 'areas_of_focus',
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'nofollow' => 'nofollow',
            'noarchive' => 'noarchive',
            'index' => 0,
            'follow' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'areas-focus/professional-development',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Student Groups',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '40ce0fcf-82af-4aa9-a8a3-b927e2d914d5',
    'vocabulary_machine_name' => 'eligibility',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'eligibility/student-groups',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'All Students',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '5a6f4bf4-3480-4a78-8520-dbf391315fb3',
    'vocabulary_machine_name' => 'eligibility',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'eligibility/all-students',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Academic Guidance',
    'description' => '',
    'format' => 'content_editor_text_format',
    'weight' => '0',
    'uuid' => '86a8452a-639a-445e-9dc7-1e53f8c7fe3d',
    'vocabulary_machine_name' => 'areas_of_focus',
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'nofollow' => 'nofollow',
            'noarchive' => 'noarchive',
            'index' => 0,
            'follow' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'areas-focus/academic-guidance',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Fellowships & Funding',
    'description' => '',
    'format' => 'content_editor_text_format',
    'weight' => '0',
    'uuid' => '9f1fb002-558a-43d6-80fd-997021d9f3d7',
    'vocabulary_machine_name' => 'areas_of_focus',
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'nofollow' => 'nofollow',
            'noarchive' => 'noarchive',
            'index' => 0,
            'follow' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'areas-focus/fellowships-funding',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Interdisciplinary Learning',
    'description' => '',
    'format' => 'content_editor_text_format',
    'weight' => '0',
    'uuid' => 'c312d4b2-82ae-4558-9360-988e4e643f40',
    'vocabulary_machine_name' => 'areas_of_focus',
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'nofollow' => 'nofollow',
            'noarchive' => 'noarchive',
            'index' => 0,
            'follow' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'areas-focus/interdisciplinary-learning',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Funding Opportunity',
    'description' => '',
    'format' => 'content_editor_text_format',
    'weight' => '0',
    'uuid' => 'f719b07e-28e3-4e34-b948-0668e793a472',
    'vocabulary_machine_name' => 'funding_type',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'vpge-funding-type/funding-opportunity',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Diversity Initiatives',
    'description' => '',
    'format' => 'content_editor_text_format',
    'weight' => '0',
    'uuid' => 'f7c6e5a0-2497-4d3b-8afa-4d9c4088fc95',
    'vocabulary_machine_name' => 'areas_of_focus',
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'nofollow' => 'nofollow',
            'noarchive' => 'noarchive',
            'index' => 0,
            'follow' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'areas-focus/diversity-initiatives',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Faculty',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'fd4766e1-4fe6-4a78-b8ab-d1c0e5cb133f',
    'vocabulary_machine_name' => 'eligibility',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'eligibility/faculty',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
