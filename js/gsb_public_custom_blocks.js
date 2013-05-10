Drupal.behaviors.gsbPublicCustomBlocks = {
    attach: function () {
      jQuery('.field-group-tab-wrapper li.vertical-tab-button a').hover(function(){jQuery(this).click();});
    }
};
