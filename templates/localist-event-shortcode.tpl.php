<div class="localist-event-shortcode-wrapper" >
  <?php if (!empty($photo_url)): ?>
    <a href="<?php print $event_url; ?>" role="presentation" aria-hidden="true" class="localist-event-shortcode-link">
      <img src="<?php print $photo_url; ?>" class="localist-event-shortcode-image" alt />
    </a>
  <?php endif; ?>
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
