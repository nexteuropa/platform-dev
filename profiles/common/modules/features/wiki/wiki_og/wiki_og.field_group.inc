<?php

/**
 * @file
 * wiki_og.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wiki_og_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wiki_community|node|wiki|form';
  $field_group->group_name = 'group_wiki_community';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Community',
    'weight' => '20',
    'children' => array(
      0 => 'group_content_access',
      1 => 'og_group_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wiki-community field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_wiki_community|node|wiki|form'] = $field_group;

  return $export;
}
