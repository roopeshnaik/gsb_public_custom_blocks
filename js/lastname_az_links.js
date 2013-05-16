(function ($) {
 /**
  * Behaviour for A-Z links block.
  */
 Drupal.behaviors.gsb_lastname_az_links = {
   attach: function (context, settings) {
     var _this = $('.pane-lastname-az-links')
     var a_el = _this.find('ul li a')

     //Load content functional
     a_el.click(function(e){
         e.preventDefault()
         var href_to = $(this).text()
         var input_f = $("[name='last_name']")
         input_f.val(href_to)
         input_f.trigger('change')
         a_el.removeAttr('class')
         updateClass(href_to)
       }) 
      
     function updateClass(id) {
       a_el.each(function(index, val){
         var currentLetter = $(this).text()
         if(currentLetter == id) {
           $(this).addClass('active')
         }
       })
     } 
      
     
     //Alphabet slider functional animation
     var prev_nav = _this.find('.prev') 
     var next_nav = _this.find('.next') 
     var all_LI_elements = _this.find('ul li').length 
     var direction
     var dyn_margin = 0
     var current_step = 0
     var disable_nav = true
     var ul = _this.find('ul')
      
     
     $(window).bind('resize load ready', function() {
       //Variables
       var width_visible = $('.pane-lastname-az-links .item-list').width()
       var width_1st_el = $('.pane-lastname-az-links li').eq(0).width()
       var width_all_li = width_1st_el * all_LI_elements
       var count_el_in_visible_wrapper = Math.floor(width_visible / width_1st_el) * width_1st_el
      

        //Control navigation state
        function makeDisabled(BTN) {
            BTN.addClass('disabled')
        }
        function makeEnabled(BTN) {
            BTN.removeClass('disabled')
        }
       
       


      function init(){
        ul.css('margin-left',0)
        makeDisabled(prev_nav) 
        makeEnabled(next_nav)
      }

      init()
      

      /* 
       * Control navigation click
       */
      
       $(prev_nav).click(function(){
         direction = 'left'
         if(dyn_margin > -200) {
           return
         }
         animateSlide(direction)
       })   
           
       $(next_nav).click(function(){
         console.log('test')
        if(dyn_margin < -200) {
          makeDisabled(next_nav)
          return
        }
         direction = 'right'
         animateSlide(direction)
       }) 

       function animateSlide(direction){
          //Prevent multiple animation clicks
          if($(ul).is(':animated')) {
            return
          }

         if (direction == 'left') {
            makeEnabled(next_nav)
            makeDisabled(prev_nav)
            dyn_margin += count_el_in_visible_wrapper
         } else {         
            makeEnabled(prev_nav)
            makeDisabled(next_nav)
            dyn_margin -= count_el_in_visible_wrapper
         }
        
         ul.animate({'margin-left' : dyn_margin}, 500, 'swing')         
       }
     })
   }
 }

})(jQuery);
