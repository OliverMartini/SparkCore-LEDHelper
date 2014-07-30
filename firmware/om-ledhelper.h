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

#ifndef _OM_LED
#define _OM_LED

// Make library cross-compatiable
// with Arduino, GNU C++ for tests, and Spark.
//#if defined(ARDUINO) && ARDUINO >= 100
//#include "Arduino.h"
//#elif defined(SPARK)
//#include "application.h"
//#endif

// TEMPORARY UNTIL the stuff that supports the code above is deployed to the build IDE
#include "application.h"

namespace OM
{
    class LEDHelper {
        private:

    
        public:
            LEDHelper();
            uint32_t Color(byte r, byte g, byte b);
            uint32_t Wheel(byte WheelPos);
			uint32_t red();
            uint32_t green();
            uint32_t blue();
    };
}

#endif