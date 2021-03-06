<?php

$plugin = array(
  'title' => t('Home Page Social Feed'),
  'category' => t('Other'),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Implements hook_PLUGIN_content_type_render().
 */
function gsb_public_custom_blocks_homepage_social_feed_content_type_render($subtype, $conf, $panel_args, $context, $incoming) {
  return (object) array(
    'content' => array(
      '#markup' => '<div class="twitter-feed designed-box feed-bg bg">
      <div class="follow-us-circles">
        <a href="https://twitter.com/stanfordbiz" target="_blank" class="circle social-block-twitter"></a>
        <a href="http://www.youtube.com/stanfordbusiness" target="_blank" class="circle social-block-youtube"></a>
        <a href="http://www.linkedin.com/company/stanford-graduate-school-of-business" target="_blank" class="circle social-block-linkedin"></a>
        <a href="https://www.facebook.com/StanfordGSB" target="_blank" class="circle social-block-facebook"></a>
      </div>
      <h5><a href="http://twitter.com/@stanfordbiz">Stanford Business</a></h5>
        <a href="http://twitter.com/@stanfordbiz">@Stanford Biz</a>
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
