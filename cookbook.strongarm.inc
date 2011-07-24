<?php
/**
 * @file
 * cookbook.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function cookbook_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_recipies';
  $strongarm->value = 0;
  $export['comment_anonymous_recipies'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_recipies';
  $strongarm->value = 1;
  $export['comment_default_mode_recipies'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_recipies';
  $strongarm->value = '50';
  $export['comment_default_per_page_recipies'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_recipies';
  $strongarm->value = 1;
  $export['comment_form_location_recipies'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_recipies';
  $strongarm->value = '2';
  $export['comment_preview_recipies'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_recipies';
  $strongarm->value = '0';
  $export['comment_recipies'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_recipies';
  $strongarm->value = 1;
  $export['comment_subject_field_recipies'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_recipies';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_recipies'] = $strongarm;

  return $export;
}
