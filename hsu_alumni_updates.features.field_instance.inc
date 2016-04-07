<?php
/**
 * @file
 * hsu_alumni_updates.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hsu_alumni_updates_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-alumni_updates-field_description_alumni_updates'.
  $field_instances['node-alumni_updates-field_description_alumni_updates'] = array(
    'bundle' => 'alumni_updates',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'question' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description_alumni_updates',
    'label' => 'Description',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');

  return $field_instances;
}
