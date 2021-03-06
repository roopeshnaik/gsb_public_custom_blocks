<?php

$plugin = array(
  'title' => t('Custom CTA: GSB Around the World'),
  'category' => t('Blocks'),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Implements hook_PLUGIN_content_type_render().
 */
function gsb_public_custom_blocks_cta_around_globe_content_type_render($subtype, $conf, $panel_args, $context, $incoming) {
  return (object) array(
    'content' => array(
      '#markup' => '<div class="designed-box cta-around-globe">
        <a href="/stanford-gsb-experience/gsb-around-world" class="around-globe-link">
          <div class="link-inner">
            <div class="link-title">GSB Around <br /> the World</div>
          </div>
        </a>
      </div>',
    ),
  );
}
