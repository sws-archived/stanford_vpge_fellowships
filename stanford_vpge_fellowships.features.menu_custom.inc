<?php
/**
 * @file
 * stanford_vpge_fellowships.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function stanford_vpge_fellowships_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-fellowships-funding.
  $menus['menu-fellowships-funding'] = array(
    'menu_name' => 'menu-fellowships-funding',
    'title' => 'Fellowships & Funding ',
    'description' => 'A sub navigation architecture for creating sidebar navigation menus in the fellowships and funding section.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A sub navigation architecture for creating sidebar navigation menus in the fellowships and funding section.');
  t('Fellowships & Funding ');


  return $menus;
}
