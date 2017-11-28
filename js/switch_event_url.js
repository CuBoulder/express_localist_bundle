/**
 * @file
 * Replace the event URL links if they match certain patterns.
 */

(function ($) {

  Drupal.behaviors.swapLocalistURLs = {
    attach: function (context) {

      // Wait for Localist HTML to render.
      var elementLoaded = setInterval(function() {
        if($(".localist_widget_wrapper").length > 0){
          clearInterval(elementLoaded);
          // Swap links.
          localistLinkSwapper();
        }
      },10);

      function localistLinkSwapper() {

        // Grab all event IDs from rendered output.
        $('li.lw_event_item').each(function() {
          var eventUrl = $('.express_lw.event_url', this)[0].innerHTML;

          // Find and replace all event links.
          if (eventUrl.includes('cupresents.org')) {

            // Image URL.
            $('a.lw_event_item_image', this).attr('href', eventUrl);

            // Title URL.
            $('.lw_event_item_title a', this).attr('href', eventUrl);
          }
        });
      }
    }
  };

})(jQuery);
