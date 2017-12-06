<div class="localist-event-shortcode-wrapper" >
  <a href="<?php print $event_url; ?>">
    <div class="localist-event-shortcode-hero" style="background-image:url(<?php print $photo_cover_url; ?>)">
    </div>
  </a>
  <div class="localist-event-shortcode-content">
    <div class="localist-event-shortcode-title">
      <a href="<?php print $event_url; ?>" class="localist-event-shortcode-link"><?php print $title; ?></a>
    </div>
    <div class="localist-events-shortcode-dates">
      <i class="fa fa-calendar" role="presentation" aria-hidden="true"></i> <?php print join(' - ', $formatted_dates); ?>
    </div>
    <div class="localist-event-shortcode-description">
      <p>
        <?php print $event_description; ?>
      </p>
    </div>
    <div class="localist-event-shortcode-view">
      <a href="<?php print $event_url; ?>" class="button button-blue button-small localist-event-shortcode-link">View Event</a>
    </div>
  </div>
</div>
