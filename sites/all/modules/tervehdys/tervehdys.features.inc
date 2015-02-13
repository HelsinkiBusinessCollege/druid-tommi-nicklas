<?php
/**
 * @file
 * tervehdys.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tervehdys_node_info() {
  $items = array(
    'welcome_to_eesti_cola' => array(
      'name' => t('Welcome to Eesti-Cola'),
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
