#ifndef Variables_H
#define Variables_H

/*
 
          -----------------------------------IMPORTANT-----------------------------------
          
                        DO NOT FORGET TO UPDATE AND DOUBLE CHECK THESE VALUES
                        
              1) ASYNC_MESSAGE_BOARD_VERSION
              2) SSID AND PASSWORD
              3) END OF SERVERNAME CORRESPONDS TO THE USER
              4) WEATHERSERVER CORRESPONDS TO THE LOCATION OF THE USER
              5) FILE_UPDATER_DESCRIPTION HAS "Async_Message_Board_" THEN THE USER

 */



#define PIN 5   //pin for the LED matrix
#define MATRIX_WIDTH 32
#define MATRIX_HEIGHT 8


#define HTTP_REQUEST_INTERVAL         0.5       //how often the AlexsRandomTech request gets sent (in seconds)
int WEATHER_REQUEST_INTERVAL =        1;        //how often the weather data request gets sent (in seconds)
#define WEATHER_INTERVAL              300000    //how often the weather function checks if new data is there (in ms)


float   ASYNC_MESSAGE_BOARD_VERSION = 1;        //the current version of the messageboard


const char* ssid     = "Home";                  // WiFi network you're trying to connect to
const char* password = "J2F-zSc-8Ur-BFK";       // Password for that WiFi network


const char* serverName      = "http://www.alexsrandomtech.com/esp-outputs-action.php?user=Yelitza"; // This is the URL (HTTP ONLY) that will pull the data for one of the led matricies
const char* weatherServer   = "http://api.openweathermap.org/data/2.5/weather?q=Joliet,Illinois&appid=3a87af710a45d108936d9c1f051ee8a5&units=imperial"; // Weather URL


const String File_Updater_Host          = "alexsrandomtech.com"; // Root website to update the arduino
const String File_Updater_Description   = "/ArduinoFiles/Async_Message_Board_Yelitza/Async_File_Uploader.php"; // This + root will go to the page that will check the update status

#endif
