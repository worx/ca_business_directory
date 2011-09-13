<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_business_directory_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_business_directory';
  $strongarm->value = array(
    'title' => '4',
    'body_field' => '11',
    'revision_information' => '18',
    'author' => '17',
    'options' => '19',
    'menu' => '16',
    'taxonomy' => '10',
    'path' => '20',
  );

  $export['content_extra_weights_ca_business_directory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_business_directory';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_business_directory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_business_directory_pattern';
  $strongarm->value = 'directory/[title-raw]';

  $export['pathauto_node_ca_business_directory_pattern'] = $strongarm;
  return $export;
}
