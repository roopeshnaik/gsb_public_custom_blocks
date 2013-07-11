<?php

function gsb_public_custom_blocks_preprocess_gsb_public_custom_blocks_weather_widget(&$vars) {
  include_once libraries_get_path('weather') . '/weather.class.php';

  /* Config Section */

  $zip = "USCA1093";					// Input your zip or country code (Stanford)

  //$zip = "USCA0830";						// Input your zip or country code (Palo Alto)

  define('DEFAULT_UNITS', "f");			// f=Fahrenheit, c=Celsius

  define('IMAGES', libraries_get_path('weather') . '/icons/lg/');			// Input your icon folder location

  /* End Config Section */

  if($zip != '') {
    if (isset($_GET['units'])) {
      $s_unit_of_measure = strtolower($_GET['units']);
    }
    else {
      $s_unit_of_measure = DEFAULT_UNITS;
    }
    $weather = new Weather();
    $weather = $weather->getWeather($zip, $s_unit_of_measure);
  }
  $vars['content'] =  "<img style=\"vertical-align: middle\" src=\"".$weather['image']."\" alt=\"\" />&nbsp;&nbsp;<strong>".$weather['temp']."</strong>\n";
}
