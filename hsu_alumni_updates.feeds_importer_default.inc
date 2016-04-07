<?php
/**
 * @file
 * hsu_alumni_updates.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function hsu_alumni_updates_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'alumni_updates';
  $feeds_importer->config = array(
    'name' => 'Alumni Updates',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'description',
            'target' => 'field_description_alumni_updates',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'bundle' => 'alumni_updates',
        'authorize' => 1,
        'skip_hash_check' => 0,
        'insert_new' => '1',
        'update_non_existent' => 'skip',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['alumni_updates'] = $feeds_importer;

  return $export;
}
