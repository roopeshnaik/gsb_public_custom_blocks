<?php

function gsb_public_custom_blocks_preprocess_gsb_public_custom_blocks_weather_widget(&$vars) {
  include_once libraries_get_path('weather') . '/weather.class.php';

  /* Config Section */

  $zip = "USCA1093";					// Input your zip or country code (Stanford)

  //$zip = "USCA0830";						// Input your zip or country code (Palo Alto)

  define('DEFAULT_UNITS', "f");			// f=Fahrenheit, c=Celsius

  define('IMAGES', libraries_get_path('weather') . '/icons/lg/');			// Input your icon folder location

  /* End Config Section */

  if(!empty($zip)) {
    $weather = new Weather();
    $weather = $weather->getWeather($zip, DEFAULT_UNITS);
  }

  $vars['image'] = theme('image' , array('path' => $weather['image']));
  $vars['temp'] = $weather['temp'];
}
