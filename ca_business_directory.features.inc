<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_business_directory_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ca_business_directory_imagecache_default_presets() {
  $items = array(
    'ca_business_dir_scale_200w' => array(
      'presetname' => 'ca_business_dir_scale_200w',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function ca_business_directory_node_info() {
  $items = array(
    'ca_business_directory' => array(
      'name' => t('Business Directory'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Business'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ca_business_directory_views_api() {
  return array(
    'api' => '2',
  );
}
