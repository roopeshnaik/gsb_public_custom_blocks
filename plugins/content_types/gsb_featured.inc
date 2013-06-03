<?php

$plugin = array(
  'title' => t('GSB Featured'),
  'category' => t('Content Panes'),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Implements hook_PLUGIN_content_type_render().
 */
function gsb_public_custom_blocks_gsb_featured_content_type_render($subtype, $conf, $panel_args, $context, $incoming) {
  $content = '';
  if ($nid = variable_get('feature_flag_event', 0)) {
    $node = node_load($nid);
    if ($node) {
      $content = node_view($node, 'featured');
    }
  }
  return (object) array(
    'content' => $content,
  );
}