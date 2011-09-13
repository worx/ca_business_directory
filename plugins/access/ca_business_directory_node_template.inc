<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("CA Business Directory: Business Directory node templates"),
  'description' => t('Control access by Business Directory node template settings.'),
  'callback' => 'ca_business_directory_node_template_access_check',
  'settings form' => 'ca_business_directory_node_template_access_settings',
  'settings form submit' => 'ca_business_directory_node_template_access_settings_submit',
  'summary' => 'ca_business_directory_node_template_access_summary',
);

/**
 * Settings form for the 'CA Business Directory: Business Directory node templates' access plugin ca_business_directory_node_template_access_settings.
 */
function ca_business_directory_node_template_access_settings(&$form, &$form_state, $conf) {
  $form['settings']['ca_business_directory_node_template'] = array(
    '#type' => 'select',
    '#title' => t('Business Directory\'s Node Template'),
    '#options' => array(
      'ca_business_directory_node_template_one' => t('Template One'),
      'ca_business_directory_node_template_two' => t('Template Two'),
      'ca_business_directory_node_template_three' => t('Template Three'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_business_directory_node_template'],
  );
  return $form;
}

/**
 * Compress the node_types allowed to the minimum.
 */
function ca_business_directory_node_template_access_settings_submit(&$form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_business_directory_node_template_access_check($conf, $context) {
  return $conf['ca_business_directory_node_template'] == variable_get('ca_business_directory_node_template', 'ca_business_directory_node_template_one');
}

/**
 * Provide a summary description based upon the checked node_types.
 */
function ca_business_directory_node_template_access_summary($conf, $context) {
  if ($conf['ca_business_directory_node_template'] == 'ca_business_directory_node_template_one') {
    $template = t('Template One');
  }
  elseif ($conf['ca_business_directory_node_template'] == 'ca_business_directory_node_template_two') {
    $template = t('Template Two');
  }
  else {
    $template = t('Template Three');
  }
  return t('Display template is set to: ' . $template);
}
