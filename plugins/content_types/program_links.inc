<?php

$plugin = array(
  'title' => t('Program Links'),
  'category' => t('Content Panes'),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Implements hook_PLUGIN_content_type_render().
 */
function gsb_public_custom_blocks_program_links_content_type_render($subtype, $conf, $panel_args, $context, $incoming) {
  return (object) array(
    'content' => array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array(
          'cta-red-gradient',
        ),
      ),
      'links' => array(
        '#theme' => 'links',
        '#links' => array(
          'mba-program' => array(
            'title' => t('MBA Program'),
            'href' => 'programs/mba',
            'attributes' => array(
              'class' => array(
                'item-0',
              ),
            ),
          ),
          'phd-program' => array(
            'title' => t('PhD Program'),
            'href' => 'programs/phd',
            'attributes' => array(
              'class' => array(
                'item-1',
              ),
            ),
          ),
          'msx-program' => array(
            'title' => t('MSx Program'),
            'href' => 'programs/msx',
            'attributes' => array(
              'class' => array(
                'item-2',
              ),
            ),
          ),
          'executive-education' => array(
            'title' => t('Executive Education'),
            'href' => 'programs/executive-education',
            'attributes' => array(
              'class' => array(
                'item-3',
              ),
            ),
          ),
          'all-programs' => array(
            'title' => t('See All Porgrams'),
            'href' => 'programs',
            'attributes' => array(
              'class' => array(
                'item-4',
              ),
            ),
          ),
        ),
      ),
    ),
  );
}
