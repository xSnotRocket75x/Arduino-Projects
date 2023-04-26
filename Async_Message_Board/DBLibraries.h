#ifndef DBLibraries_H
#define DBLibraries_H

#include "ESPAsyncWebServer.h"    //calls the web requests in the background
#include "ArduinoJson.h"  //used for parsing the data about the firmware version and updates
#include "esp32fota.h"    //also used in updating the firmware VERSION 0.1.3
#include "time.h"   //useful for getting the local time
#include <WiFi.h> // VERSION 1.27
#include <NTPClient.h> // VERSION 3.20
#include <FastLED_NeoMatrix.h> // VERSION 1.10
#include <Fonts/AlexFont.h> // PUT IN  FONTS FOLDER IN ADAFRUIT GFX LIBRARY
#include <Fonts/Dialog_plain_5.h>
#include <HTTPClient.h>
#include <AsyncHTTPRequest_Generic.h> // VERSION 1.12
#include <Ticker.h>   //used with Async web requests to run them outside of main loop
#include <WiFiMulti.h> // Can connect to different WiFi networks if one doesn't work

#endif
