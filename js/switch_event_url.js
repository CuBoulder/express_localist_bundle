/**
 * @file
 * Replace the event URL links if they match certain patterns.
 */

(function ($) {
  Drupal.behaviors.swapLocalistURLs = {
    attach: function (context) {

      // Wait for Localist HTML to render.
      var elementLoaded = setTimeout(function() {
        localistLinkSwapper();
      },1000);

      function localistLinkSwapper() {
        // Grab all event IDs from rendered output.
        $('li.le-event').each(function() {
          var eventUrl = $(this).data('website-url');
          // Find and replace all event links.
          if (eventUrl.includes('cupresents.org')) {
            // Image URL.
            $('.le-photo a, a.le-photo', this).attr('href', eventUrl);

            $('a.view-event-details', this).attr('href', eventUrl);

            // Title URL.
            $('.le-event-title a, a.le-event-title', this).attr('href', eventUrl);
          }
        });
      }
    }
  };

})(jQuery);
