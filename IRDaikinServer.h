/*
* IRDaikinServer : Simple http interface to control Daikin A/C units via IR
* Version 0.1 July, 2017
* Copyright 2017 Andrea Cucci
*
* Dependencies:
*	- Arduino core for ESP8266 WiFi chip (https://github.com/esp8266/Arduino)
*	- IRremote ESP8266 Library (https://github.com/markszabo/IRremoteESP8266)
*
*/

#define EEPROM_SIZE 512

typedef struct EEPROM_data {
	uint8_t temp;
	uint8_t fan;
	uint8_t power;
	uint8_t powerful;
	uint8_t quiet;
	uint8_t swingh;
	uint8_t swingv;
	uint8_t mode;
} EEPROM_data;

typedef struct setting_t {
	String name;
	uint8_t value;
} setting_t;