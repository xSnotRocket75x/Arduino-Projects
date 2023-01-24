#ifndef DBLibraries_H
#define DBLibraries_H

#include "ESPAsyncWebServer.h"    //calls the web requests in the background
#include "ArduinoJson.h"  //used for parsing the data about the firmware version and updates
#include "esp32fota.h"    //also used in updating the firmware
#include "time.h"   //useful for getting the local time
#include <WiFi.h>
#include <NTPClient.h>
#include <FastLED_NeoMatrix.h>
#include <Fonts/AlexFont.h>
#include <Fonts/Dialog_plain_5.h>
#include <HTTPClient.h>
#include <AsyncHTTPRequest_Generic.h>
#include <Ticker.h>   //used with Async web requests to run them outside of main loop
#include <WiFiMulti.h>

#endif
