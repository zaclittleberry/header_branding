<?php
/**
 * @file
 * header_branding.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function header_branding_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any header bean'.
  $permissions['view any header bean'] = array(
    'name' => 'view any header bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
