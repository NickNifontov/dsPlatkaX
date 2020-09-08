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
#include "Task.h"

/********************************************************************************
 * Class Periphery
 ********************************************************************************/

class Periphery {
    public:
        static void Init() {
            Clock::Init();
            Task::Init(true); // Systick TRUE/ FALSE
            Nvic::Init();
        }
};


#endif /* PERIPHERY_H_ */
