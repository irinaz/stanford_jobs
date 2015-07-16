<?php
/**
 * @file
 * stanford_jobs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_jobs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'jobs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jobs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Jobs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_s_jobs_company' => 'field_s_jobs_company',
    'field_s_jobs_location' => 'field_s_jobs_location',
  );
  $handler->display->display_options['row_options']['separator'] = ' @ ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'stanford_month_date_year';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'stanford_time';
  /* Field: Content: Job Posting Link */
  $handler->display->display_options['fields']['field_s_job_posting_link']['id'] = 'field_s_job_posting_link';
  $handler->display->display_options['fields']['field_s_job_posting_link']['table'] = 'field_data_field_s_job_posting_link';
  $handler->display->display_options['fields']['field_s_job_posting_link']['field'] = 'field_s_job_posting_link';
  $handler->display->display_options['fields']['field_s_job_posting_link']['label'] = '';
  $handler->display->display_options['fields']['field_s_job_posting_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_job_posting_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_job_posting_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_job_posting_link']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_s_job_posting_link] ';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_s_jobs_company']['id'] = 'field_s_jobs_company';
  $handler->display->display_options['fields']['field_s_jobs_company']['table'] = 'field_data_field_s_jobs_company';
  $handler->display->display_options['fields']['field_s_jobs_company']['field'] = 'field_s_jobs_company';
  $handler->display->display_options['fields']['field_s_jobs_company']['label'] = '';
  $handler->display->display_options['fields']['field_s_jobs_company']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_s_jobs_location']['id'] = 'field_s_jobs_location';
  $handler->display->display_options['fields']['field_s_jobs_location']['table'] = 'field_data_field_s_jobs_location';
  $handler->display->display_options['fields']['field_s_jobs_location']['field'] = 'field_s_jobs_location';
  $handler->display->display_options['fields']['field_s_jobs_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_jobs_location']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jobs' => 'jobs',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['jobs'] = $view;

  return $export;
}
