<?php

$plugin = array(
  'title' => t('Program Finder'),
  'category' => t('Content Panes'),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Implements hook_PLUGIN_content_type_render().
 */
function gsb_public_custom_blocks_program_finder_content_type_render($subtype, $conf, $panel_args, $context, $incoming) {
  drupal_add_js(drupal_get_path('module', 'gsb_public_custom_blocks') . '/js/gsb_public_custom_blocks.js');
  $tabs = array(
    array(
        'title' => 'Full-Time Degree', 
        '#markup' => '<a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">Msx Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
    array(
        'title' => 'Executive Education',
        '#markup' => '<p>Executive Education </p><a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">Msx Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
      array(
        'title' => 'General Management',
        '#markup' => '<p>General Management</p><a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">Msx Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
      array(
        'title' => 'Global',
        '#markup' => '<p>Global</p><a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">Msx Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
      array(
        'title' => 'Entrepreneurship',
        '#markup' => '<p>Entrepreneurship</p><a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">Msx Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
      array(
        'title' => 'Multi-Disciplinary',
        '#markup' => '<p>Multi-Disciplinary</p><a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">Msx Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
      array(
        'title' => 'Online',
        '#markup' => '<p>Online</p><a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">Msx Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
      array(
        'title' => 'Undergraduate',
        '#markup' => '<p>Undergraduate</p><a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">Msx Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
  );
  return (object) array(
    'title' => t('Program Finder'),
    'content' => _gsb_public_custom_blocks_generate_tabs($tabs),
  );
}
