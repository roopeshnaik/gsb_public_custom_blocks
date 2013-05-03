<?php

$plugin = array(
  'title' => t('Home Page Social Feed'),
  'category' => t('Content Panes'),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Implements hook_PLUGIN_content_type_render().
 */
function gsb_public_custom_blocks_homepage_social_feed_content_type_render($subtype, $conf, $panel_args, $context, $incoming) {
  return (object) array(
    'title' => t('Home Page Social Feed'),
    'content' => array(
      '#markup' => '<div class="twitter-feed designed-box feed-bg bg">
      <div class="follow-us-circles">
        <a href="#" class="circle social-block-twitter"></a>
        <a href="#" class="circle social-block-youtube"></a>
        <a href="#" class="circle social-block-linkedin"></a>
        <a href="#" class="circle social-block-facebook"></a>
      </div>
      <h5><a href="http://twitter.com/@stanfordbiz">Stanford Business</a></h5>
      <p class="twitter-feed-source">
        <a href="http://twitter.com/@stanfordbiz">@Stanford Biz</a>
      </p>
      <div id="fpp-tweets-front"></div>
      </div>
      <script>gsb_tweetfeed.init({
      search: \'@stanfordbiz\',
      numTweets: 2,
      appendTo: \'#fpp-tweets-front\',
      format: \'l, M j | a\'
    });</script>',
    ),
  );
}
