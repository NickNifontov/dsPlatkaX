/*
 * Periphery.h
 *
 *  Created on: Sep 9, 2020
 *      Author: RadaR
 */

#ifndef PERIPHERY_H_
#define PERIPHERY_H_

/********************************************************************************
 * Include
 ********************************************************************************/
#include "Clock.h"
#include "Nvic.h"

/********************************************************************************
 * Class Periphery
 ********************************************************************************/

class Periphery {
    public:
        static void Init() {
            Clock::Init();
            Nvic::Init();
        }
};


#endif /* PERIPHERY_H_ */
