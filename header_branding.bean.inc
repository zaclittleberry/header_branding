<?php
/**
 * @file
 * header_branding.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function header_branding_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'header';
  $bean_type->label = 'Header';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['header'] = $bean_type;

  return $export;
}
