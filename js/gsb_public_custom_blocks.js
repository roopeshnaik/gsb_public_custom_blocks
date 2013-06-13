(function ($) {
  Drupal.behaviors.gsbPublicCustomBlocks = {
      attach: function () {
        $('div.pane-program-finder .field-group-tab-wrapper li.vertical-tab-button a').hover(function(){
          $(this).click();
        });
        $('div.pane-program-finder .field-group-tab-wrapper li.vertical-tab-button a').click(function(){
          window.location.hash = $(this).find('strong').text();
        });
        $('div.pane-program-finder .field-group-tab-wrapper li.vertical-tab-button a strong').each(function (index) {
          var text = $(this).text();
          $(this).parent('a').attr('href', '#' + text);
          if (window.location.hash && !Drupal.settings.gsb_public_custom_blocks) {
            //open tab if anchor present
            var anchor = window.location.hash;
            anchor = anchor.replace('%20', ' ');
            if (anchor === '#' + text) {
              $(this).parent('a').click();
              $('div.pane-program-finder').attr('id', 'pane-program-finder');
              window.location.hash = 'pane-program-finder';
              window.location.hash = text;
            }
          }
        });
        Drupal.settings.gsb_public_custom_blocks = {};
        Drupal.settings.gsb_public_custom_blocks.activated = true;

        // Add our responsive javascript.
        if (Modernizr.mq('(max-width: 768px)')) {
          $('.pane-program-finder .vertical-tabs-list').addClass('resp-tabs-list');
          $('.pane-program-finder .vertical-tabs').easyResponsiveTabs({type: 'accordion'});
        }
      }
  };
})(jQuery);
