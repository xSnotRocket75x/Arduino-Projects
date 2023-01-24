#ifndef Variables_H
#define Variables_H


#define PIN 5   //pin for the LED matrix
#define MATRIX_WIDTH 32
#define MATRIX_HEIGHT 8


#define HTTP_REQUEST_INTERVAL         0.5     //how often the AlexsRandomTech request gets sent (in seconds)
int WEATHER_REQUEST_INTERVAL =        1;      //how often the weather data request gets sent (in seconds)
#define WEATHER_INTERVAL              300000  //how often the weather function checks if new data is there (in ms)


float   ASYNC_MESSAGE_BOARD_VERSION = 1; //the current version of the messageboard


const char* ssid            = "Who Took My Flamingoz?! C"; //SSID of the network youre trying to connect to
const char* password        = "S3xyP@nts!"; // Password of the network youre trying to connect to

const char* serverName      = "http://www.alexsrandomtech.com/esp-outputs-action.php?user=Alex"; // This is the URL (HTTP ONLY) that will pull the data for one of the led matricies
const char* weatherServer   = "http://api.openweathermap.org/data/2.5/weather?q=Olathe,Kansas&appid=3a87af710a45d108936d9c1f051ee8a5&units=imperial"; // Weather URL

const String File_Updater_Host          = "alexsrandomtech.com"; // Root website to update the arduino
const String File_Updater_Description   = "/ArduinoFiles/Async_Message_Board/Async_File_Uploader.php"; // This + root will go to the page that will check the update status

#endif
