<?php
/**
 * @file
 * express_localist_bundle.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function express_localist_bundle_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_localist_display|bean|localist_events|form';
  $field_group->group_name = 'group_localist_display';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'localist_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display Options',
    'weight' => '13',
    'children' => array(
      0 => 'field_localist_widget_type',
      1 => 'field_localist_style',
      2 => 'field_localist_hide_descriptions',
      3 => 'field_localist_truncate_desc',
      4 => 'field_localist_render_html',
      5 => 'field_localist_hide_images',
      6 => 'field_localist_hide_times',
      7 => 'field_localist_new_window',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Display Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-localist-display field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_localist_display|bean|localist_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_localist_excluded|bean|localist_events|form';
  $field_group->group_name = 'group_localist_excluded';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'localist_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Excluded Content',
    'weight' => '12',
    'children' => array(
      0 => 'field_localist_type_excluded',
      1 => 'field_localist_hide_past_events',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-localist-excluded field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_localist_excluded|bean|localist_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_localist_places|bean|localist_events|form';
  $field_group->group_name = 'group_localist_places';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'localist_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Places',
    'weight' => '9',
    'children' => array(
      0 => 'field_localist_places',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Places',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-localist-places field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_localist_places|bean|localist_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_localist_tags|bean|localist_events|form';
  $field_group->group_name = 'group_localist_tags';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'localist_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Keywords and Tags',
    'weight' => '4',
    'children' => array(
      0 => 'field_localist_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Keywords and Tags',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-localist-tags field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_localist_tags|bean|localist_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_localist_type|bean|localist_events|form';
  $field_group->group_name = 'group_localist_type';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'localist_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type',
    'weight' => '10',
    'children' => array(
      0 => 'field_localist_event_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Type',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-localist-type field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_localist_type|bean|localist_events|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display Options');
  t('Excluded Content');
  t('Keywords and Tags');
  t('Places');
  t('Type');

  return $field_groups;
}
