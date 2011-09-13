<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_business_directory_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_business_directory content
  $permissions['create ca_business_directory content'] = array(
    'name' => 'create ca_business_directory content',
    'roles' => array(),
  );

  // Exported permission: delete any ca_business_directory content
  $permissions['delete any ca_business_directory content'] = array(
    'name' => 'delete any ca_business_directory content',
    'roles' => array(),
  );

  // Exported permission: delete own ca_business_directory content
  $permissions['delete own ca_business_directory content'] = array(
    'name' => 'delete own ca_business_directory content',
    'roles' => array(),
  );

  // Exported permission: edit any ca_business_directory content
  $permissions['edit any ca_business_directory content'] = array(
    'name' => 'edit any ca_business_directory content',
    'roles' => array(),
  );

  // Exported permission: edit own ca_business_directory content
  $permissions['edit own ca_business_directory content'] = array(
    'name' => 'edit own ca_business_directory content',
    'roles' => array(),
  );

  return $permissions;
}
