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
      
      

      function makeDisabled(BTN) {
          BTN.addClass('disabled')
      }
      function makeEnabled(BTN) {
          BTN.removeClass('disabled')
      }

      if(dyn_margin == 0) {
        makeDisabled(prev_nav)
      }

     
     $(window).bind('resize load ready', function() {

       var width_visible = $('.pane-lastname-az-links .item-list').width()
       var width_1st_el = $('.pane-lastname-az-links li').eq(0).width()
       var width_all_li = width_1st_el * all_LI_elements

       


       $(prev_nav).click(function(){
         //dyn_margin++
         console.log(dyn_margin)
         direction = 'left'
        if(dyn_margin > -200) {
          return
        }
         animateSlide(direction)
       })   
           
       $(next_nav).click(function(){
        // dyn_margin--
        console.log(dyn_margin)
        if(dyn_margin < -200) {
          makeDisabled(next_nav)
          return
        }
          makeEnabled(next_nav)
         direction = 'right'
         animateSlide(direction)
         
       }) 


        
       
        
       function animateSlide(direction){
         
        if($(ul).is(':animated')) {
          return
        }       
         
      // console.log('width of visible container ' + width_visible)
      // console.log('width of first element ' + width_1st_el)
      // console.log('width of all li ' + width_all_li)


         if(direction == 'left') {
            dyn_margin += 200
            
           
            
            
         } else {          
             dyn_margin -= 200
         }
         
        
        
        


         
         ul.animate({
            'margin-left' : dyn_margin
          }, 500, 'swing', function() {
            
            if(dyn_margin < 0) {
              makeEnabled(prev_nav)
            } else {
              makeDisabled(prev_nav)
            }
          })         
         

         
       }  

     })
     
      

   
      
      
      
   }
 }

})(jQuery);
