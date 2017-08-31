<?php

function express_localist_bundle_config_form($form, &$form_state) {
  $form['express_localist_url'] = array(
    '#type' => 'textfield',
    '#title' => 'Localist URL',
    '#description' => 'URL of your Localist Installation.',
    '#default_value' => variable_get('express_localist_url', NULL),
  );

  // Let system_settings_form_submit run first to variable_set vars.
  $form = system_settings_form($form);
  return $form;
}
