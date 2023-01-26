#ifndef Variables_H
#define Variables_H

/*

          -----------------------------------IMPORTANT-----------------------------------

                                        REMEMBER TO UPDATE

                                    ASYNC_MESSAGE_BOARD_VERSION

*/



#define PIN 5   //pin for the LED matrix
#define MATRIX_WIDTH 32
#define MATRIX_HEIGHT 8


#define HTTP_REQUEST_INTERVAL         0.5       //how often the AlexsRandomTech request gets sent (in seconds)
int WEATHER_REQUEST_INTERVAL =        1;        //how often the weather data request gets sent (in seconds)
#define WEATHER_INTERVAL              300000    //how often the weather function checks if new data is there (in ms)


float   ASYNC_MESSAGE_BOARD_VERSION = 1;        //the current version of the messageboard

// The different SSIDs and Passwords that the ESP32 will try to connect to
const char*  SSID1       = "Home";
const char*  PASSWORD1   = "J2F-zSc-8Ur-BFK";

const char*  SSID2       = "Who Took My Flamingoz?! C";
const char*  PASSWORD2   = "S3xyP@nts!";

const char*  SSID3       = "Who Took My Flamingoz?! B";
const char*  PASSWORD3   = "S3xyP@nts!";


// The different servers to have the ESP32 connect to based on which network its conencted to
const char* SERVER_NAME_ALEX      = "http://www.alexsrandomtech.com/esp-outputs-action.php?user=Alex"; // This is the URL (HTTP ONLY) that will pull the data for one of the led matricies
const char* WEATHER_SERVER_ALEX   = "http://api.openweathermap.org/data/2.5/weather?q=Olathe,Kansas&appid=3a87af710a45d108936d9c1f051ee8a5&units=imperial"; // Weather URL

const char* SERVER_NAME_YELITZA      = "http://www.alexsrandomtech.com/esp-outputs-action.php?user=Yelitza"; // This is the URL (HTTP ONLY) that will pull the data for one of the led matricies
const char* WEATHER_SERVER_YELITZA   = "http://api.openweathermap.org/data/2.5/weather?q=Joliet,Illinois&appid=3a87af710a45d108936d9c1f051ee8a5&units=imperial"; // Weather URL


const char* File_Updater_Host          = "alexsrandomtech.com"; // Root website to update the arduino
const char* File_Updater_Description_ALEX   = "/ArduinoFiles/Async_Message_Board_Alex/Async_File_Uploader.php"; // This + root will go to the page that will check the update status
const char* File_Updater_Description_YELITZA   = "/ArduinoFiles/Async_Message_Board_Yelitza/Async_File_Uploader.php"; // This + root will go to the page that will check the update status

#endif
