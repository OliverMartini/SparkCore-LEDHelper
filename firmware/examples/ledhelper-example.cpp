#include "om-ledhelper/om-ledhelper.h"

/*
 * LEDHELPER LIBRARY FOR SPARK CORE
 * =======================================================
 * Copy this into a new application at:
 * https://www.spark.io/build and go nuts!
 * -------------------------------------------------------
 *  Author: Oliver Martini
 *    Date: Jul 29th 2014
 * =======================================================
 * https://github.com/olivermartini/SparkCore-LEDHelper
 */
 
// Initialize objects from the lib; be sure not to call anything
// that requires hardware be initialized here, put those in setup()
OM::LEDHelper ledHelper;

void setup() {
}

void loop() {
}

void setColor() {
    uint32_t color = ledHelper.Color(128,128,128);

	// set solid color
    uint32_t colorRed   = ledHelper.red();
	uint32_t colorGreen = ledHelper.green();
	uint32_t colorBlue  = ledHelper.blue();
}

