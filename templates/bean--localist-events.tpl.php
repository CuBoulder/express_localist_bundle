<div class="localist-events">
  <script type="text/javascript"
src="<?php print $widget_url; ?>"></script>
</div>
<?php
  if (!empty($content['field_localist_link'])):
?>
  <div class="localist-link more-link">
    <?php print render($content['field_localist_link']); ?>
  </div>
<?php endif; ?>
<?php // print $widget_url; ?>
