<?php
/**
 * @file
 * hsu_alumni_updates.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hsu_alumni_updates_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hsu_alumni_updates_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hsu_alumni_updates_node_info() {
  $items = array(
    'alumni_updates' => array(
      'name' => t('Alumni Updates'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
