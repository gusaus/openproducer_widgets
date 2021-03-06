<?php
/**
 * @file
 * openproducer_widgets.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function openproducer_widgets_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_widget'
  $field_bases['field_widget'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_widget',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
