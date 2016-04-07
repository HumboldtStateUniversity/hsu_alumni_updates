<?php
/**
 * @file
 * hsu_alumni_updates.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hsu_alumni_updates_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear alumni_updates feeds'.
  $permissions['clear alumni_updates feeds'] = array(
    'name' => 'clear alumni_updates feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create alumni_updates content'.
  $permissions['create alumni_updates content'] = array(
    'name' => 'create alumni_updates content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any alumni_updates content'.
  $permissions['delete any alumni_updates content'] = array(
    'name' => 'delete any alumni_updates content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own alumni_updates content'.
  $permissions['delete own alumni_updates content'] = array(
    'name' => 'delete own alumni_updates content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any alumni_updates content'.
  $permissions['edit any alumni_updates content'] = array(
    'name' => 'edit any alumni_updates content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own alumni_updates content'.
  $permissions['edit own alumni_updates content'] = array(
    'name' => 'edit own alumni_updates content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'import alumni_updates feeds'.
  $permissions['import alumni_updates feeds'] = array(
    'name' => 'import alumni_updates feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock alumni_updates feeds'.
  $permissions['unlock alumni_updates feeds'] = array(
    'name' => 'unlock alumni_updates feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
