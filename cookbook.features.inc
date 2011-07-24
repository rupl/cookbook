<?php
/**
 * @file
 * cookbook.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function cookbook_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function cookbook_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function cookbook_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorites".
  $flags['favorites'] = array(
    'content_type' => 'node',
    'title' => 'Favorites',
    'global' => '0',
    'types' => array(
      0 => 'recipies',
    ),
    'flag_short' => 'Save Recipe',
    'flag_long' => 'Save this Recipe',
    'flag_message' => 'Recipe saved',
    'unflag_short' => 'Forget Recipe',
    'unflag_long' => 'Forget about this Recipe',
    'unflag_message' => 'Recipe forgotten',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'cookbook',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}

/**
 * Implementation of hook_node_info().
 */
function cookbook_node_info() {
  $items = array(
    'recipies' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('The meat, bones, and sinew of this website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
