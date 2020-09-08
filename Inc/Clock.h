/*
 * Clock.h
 *
 *  Created on: Sep 9, 2020
 *      Author: RadaR
 */

#ifndef CLOCK_H_
#define CLOCK_H_

/********************************************************************************
 * Include
 ********************************************************************************/

#include "GlobalDef.h"
#include "GlobalInc.h"

/********************************************************************************
 * Class Clock
 *
 * Initialization for the clock's system
 ********************************************************************************/

class Clock {
    public:
        static void Init (void);

    private:
		static void SystemClock_Config(void);
};

#endif /* CLOCK_H_ */
