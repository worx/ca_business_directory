<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function ca_business_directory_taxonomy_default_vocabularies() {
  return array(
    'ca_bussiness_directory_category' => array(
      'name' => 'Category',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_ca_bussiness_directory_category',
      'weight' => '0',
      'nodes' => array(
        'ca_business_directory' => 'ca_business_directory',
      ),
    ),
  );
}
