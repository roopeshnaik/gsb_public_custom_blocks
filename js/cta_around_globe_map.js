(function ($) {
  Drupal.behaviors.ctaAroundGlobeMap = {
    attach: function () {
    	try {
    		var map = L.mapbox.map("map", "jennyhutch.gsb-main-data");
	    	map.gridControl.options.sanitizer = function(x) { return x; };    	
    	} catch(e) {
    	}
    }
  };
})(jQuery);