<?php

$plugin = array(
  'title' => t('Media Toolkit'),
  'category' => t('Content Panes'),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Implements hook_PLUGIN_content_type_render().
 */
function gsb_public_custom_blocks_media_toolkit_content_type_render($subtype, $conf, $panel_args, $context, $incoming) {
  return (object) array(
    'title' => t('Media Toolkit'),
    'content' => array(
      '#theme' => 'links',
      '#links' => array(
        'faculty-experts' => array(
          'title' => t('Faculty Experts'),
          'href' => '<front>',
        ),
        'research-news' => array(
          'title' => t('Research News'),
          'href' => '<front>',
        ),
        'photo-video-gallery' => array(
          'title' => t('Photo/Video Gallery'),
          'href' => '<front>',
        ),
        'press-kit' => array(
          'title' => t('Press Kit'),
          'href' => '<front>',
        ),
        'quick-facts' => array(
          'title' => t('Quick Facts'),
          'href' => '<front>',
        ),
        'parking-directions' => array(
          'title' => t('Parking & Directions'),
          'href' => '<front>',
        ),
        'content-reprint-policy' => array(
          'title' => t('Content Reprint Policy'),
          'href' => '<front>',
        ),
      ),
    ),
  );
}
