<?php
/**
 * @file
 * cookbook.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function cookbook_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'recipies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'recipies';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search for Recipies';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'fn';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Ingredients */
  $handler->display->display_options['fields']['field_recipe_ingredients']['id'] = 'field_recipe_ingredients';
  $handler->display->display_options['fields']['field_recipe_ingredients']['table'] = 'field_data_field_recipe_ingredients';
  $handler->display->display_options['fields']['field_recipe_ingredients']['field'] = 'field_recipe_ingredients';
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_recipe_ingredients']['element_class'] = 'ingredients';
  $handler->display->display_options['fields']['field_recipe_ingredients']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_recipe_ingredients']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_recipe_ingredients']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_recipe_ingredients']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_recipe_ingredients']['field_api_classes'] = 0;
  /* Field: Content: Instructions */
  $handler->display->display_options['fields']['field_recipe_instructions']['id'] = 'field_recipe_instructions';
  $handler->display->display_options['fields']['field_recipe_instructions']['table'] = 'field_data_field_recipe_instructions';
  $handler->display->display_options['fields']['field_recipe_instructions']['field'] = 'field_recipe_instructions';
  $handler->display->display_options['fields']['field_recipe_instructions']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_recipe_instructions']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_recipe_instructions']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_recipe_instructions']['element_class'] = 'instructions';
  $handler->display->display_options['fields']['field_recipe_instructions']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_recipe_instructions']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_recipe_instructions']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_recipe_instructions']['multi_type'] = 'ol';
  $handler->display->display_options['fields']['field_recipe_instructions']['field_api_classes'] = 0;
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipies' => 'recipies',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = '';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;

  /* Display: Search */
  $handler = $view->new_display('panel_pane', 'Search', 'search');
  $export['recipies'] = $view;

  return $export;
}
