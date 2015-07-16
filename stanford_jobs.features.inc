<?php
/**
 * @file
 * stanford_jobs.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function stanford_jobs_block_class_features_default_class() {
  return array(
    'views:jobs-block' => array(
      'module' => 'views',
      'delta' => 'jobs-block',
      'css_classes' => 'well  ',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_jobs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_jobs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stanford_jobs_node_info() {
  $items = array(
    'jobs' => array(
      'name' => t('Jobs'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
