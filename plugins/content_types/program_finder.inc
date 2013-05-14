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
        '#markup' => '<a href="/">Full-Time Degrees</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">PhD Programs</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
    array(
        'title' => 'Executive Education',
        '#markup' => '<a href="/">Executive Education</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>'
      ),
      array(
        'title' => 'General Management',
        '#markup' => '<a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">Msx Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
      array(
        'title' => 'Global',
        '#markup' => '<a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>
<a href="/">Executive Education</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">Stanford Ignite</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">Stanford Online Innovation and Entrepreneurship Certificate</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">SEED Programs</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>'
      ),
      array(
        'title' => 'Entrepreneurship',
        '#markup' => '<a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">Msx Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
      array(
        'title' => 'Multi-Disciplinary',
        '#markup' => '<a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">Msx Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
      array(
        'title' => 'Online',
        '#markup' => '<a href="/">MBA Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci. Fusce id felis. Vivamus sollicitudin.</p>
<a href="/">Msx Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Sed odio est, auctor ac, sollicitudin in, consequat vitae, orci.</p>
<a href="/">PhD Program</a>
<p>Porta, mi justo elementum justo, vitae gravida dui sapien vel metus, Quisque elementum, mauris. Macenas at justo id velit placerat molestie ultricies eu, sagittis non.</p>'
      ),
      array(
        'title' => 'Undergraduate',
        '#markup' => '<a href="/">MBA Program</a>
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
