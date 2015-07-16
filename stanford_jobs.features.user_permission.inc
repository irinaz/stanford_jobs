<?php
/**
 * @file
 * stanford_jobs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_jobs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create jobs content'.
  $permissions['create jobs content'] = array(
    'name' => 'create jobs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any jobs content'.
  $permissions['delete any jobs content'] = array(
    'name' => 'delete any jobs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own jobs content'.
  $permissions['delete own jobs content'] = array(
    'name' => 'delete own jobs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any jobs content'.
  $permissions['edit any jobs content'] = array(
    'name' => 'edit any jobs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own jobs content'.
  $permissions['edit own jobs content'] = array(
    'name' => 'edit own jobs content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
