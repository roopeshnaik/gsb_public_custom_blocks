Drupal.behaviors.gsbPublicCustomBlocks = {
    attach: function () {
      jQuery('.field-group-tab-wrapper li.vertical-tab-button a').hover(function(){jQuery(this).click();});
      if (window.location.hash && !Drupal.settings.gsb_public_custom_blocks) {
        var anchor = window.location.hash;
        if (!Drupal.settings.gsb_public_custom_blocks) {
          Drupal.settings.gsb_public_custom_blocks = {};
        }
        Drupal.settings.gsb_public_custom_blocks.activated = true;
        jQuery('.field-group-tab-wrapper li.vertical-tab-button a strong').each(function (index) {
          if (anchor === '#' + (jQuery(this).text())) {
            jQuery(this).parent('a').click();
          }
        });
      }
    }
};