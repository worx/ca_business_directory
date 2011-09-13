<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_business_directory_user_default_roles() {
  $roles = array();

  // Exported role: business directory administrator
  $roles['business directory administrator'] = array(
    'name' => 'business directory administrator',
  );

  return $roles;
}
