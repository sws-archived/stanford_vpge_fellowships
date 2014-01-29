<?php
/**
 * @file
 */

/**
 * Implementation of hook_drush_command().
 *
 * @See drush_parse_command() for a list of recognized keys.
 *
 * @return
 *   An associative array describing your command(s).
 */
function stanford_vpge_fellowships_drush_command() {
  $items = array();

  $items['stanford-vpge-images'] = array(
    'description' => 'Migrates all images from old field collection to new image field on existing fellowship nodes.',
    'callback' => 'drush_stanford_vpge_fellowships_move_image_from_field_collection_field',
    'aliases' => array('vpge-images', 'vpgei'),
  );

  return $items;
}

/**
 * Moves images out of field_s_image_info to field_s_fellowship_image for all
 * existing fellowship nodes.
 */
function drush_stanford_vpge_fellowships_move_image_from_field_collection_field() {

  // Get fellowship nodes.
  $nodes_r = db_select('node', 'n')
    ->fields('n', array('nid', 'title'))
    ->condition('type', 'fellowship_funding')
    ->execute();
  $node_nids = $nodes_r->fetchAllAssoc('nid');

  $nodes = node_load_multiple(array_keys($node_nids));

  // Loop through the fellowships nodes and move the image to the new field.
  foreach ($nodes as $fellowship) {

    // If no field collection entity available just continue on to the next.
    if (!is_numeric($fellowship->field_s_image_info[LANGUAGE_NONE][0]['value'])) {
      continue;
    }

    // Load up the entity (field_collection)
    $fc = entity_load('field_collection_item', array($fellowship->field_s_image_info[LANGUAGE_NONE][0]['value']));
    $fc = array_pop($fc);

    // If the field_collection fails to load then continue.
    if (!$fc) {
      continue;
    }

    // Check the field collection for an image.
    if (!isset($fc->field_s_image_image[LANGUAGE_NONE][0])) {
      continue;
    }

    // Simply move it to the fellowship field node.
    $fellowship->field_s_fellowship_image = $fc->field_s_image_image;
    $fellowship->path['alias'] = drupal_get_path_alias('node/' . $fellowship->nid);
    $fellowship->path['pathauto'] = 0;
    node_save($fellowship);

    // Remove image from field collection
    unset($fc->field_s_image_image[LANGUAGE_NONE]);
    $fc->save();

    drush_log('Fixed: ' . $fellowship->title, 'ok');
  }

  drush_log('Completed: Image migrate', 'status');
}
