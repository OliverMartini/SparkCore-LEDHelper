#include "om-ledhelper.h"

/*
 * LED HELPER LIBRARY FOR SPARK CORE
 * =======================================================
 * Copy this into a new application at:
 * https://www.spark.io/build and go nuts!
 * -------------------------------------------------------
 *  Author: Oliver Martini
 *    Date: Jul 29th 2014
 * =======================================================
 * https://github.com/olivermartini/SparkCore-LEDHelper
 */
 
/*
 * Thanks to Adafruit for the reference and inspiration
 */ 

// Constructor
OM::LEDHelper::LEDHelper(void) {
}

// Initializers that should be called in the `setup()` function


// Main API functions that the library provides
// typically called in `loop()` or `setup()` functions
// Create a 24 bit color value from R,G,B
uint32_t OM::LEDHelper::Color(byte r, byte g, byte b) {
	uint32_t c;
	c = r;
	c <<= 8;
	c |= g;
	c <<= 8;
	c |= b;
	return c;
}
 
//Input a value 0 to 255 to get a color value.
//The colours are a transition r - g -b - back to r
uint32_t OM::LEDHelper::Wheel(byte WheelPos) {
	if (WheelPos < 85) {
		return Color(WheelPos * 3, 255 - WheelPos * 3, 0);
	} else if (WheelPos < 170) {
		WheelPos -= 85;
		return Color(255 - WheelPos * 3, 0, WheelPos * 3);
	} else {
		WheelPos -= 170; 
		return Color(0, WheelPos * 3, 255 - WheelPos * 3);
	}
}

// Getters
uint32_t OM::LEDHelper::red() {
    return Color(255,0,0);
}

uint32_t OM::LEDHelper::green() {
    return Color(0,255,0);
}

uint32_t OM::LEDHelper::blue() {
    return Color(0,0,255);
}

// Setters



