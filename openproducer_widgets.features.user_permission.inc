<?php
/**
 * @file
 * openproducer_widgets.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openproducer_widgets_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable widgets'.
  $permissions['create fieldable widgets'] = array(
    'name' => 'create fieldable widgets',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable widgets'.
  $permissions['delete fieldable widgets'] = array(
    'name' => 'delete fieldable widgets',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable widgets'.
  $permissions['edit fieldable widgets'] = array(
    'name' => 'edit fieldable widgets',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
