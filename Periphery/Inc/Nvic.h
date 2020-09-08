/*
 * Nvic.h
 *
 *  Created on: Sep 9, 2020
 *      Author: RadaR
 */

#ifndef NVIC_H_
#define NVIC_H_

/********************************************************************************
 * Include
 ********************************************************************************/

#include "GlobalDef.h"

#include "stm32f3xx.h"

#include "stm32f3xx_ll_bus.h"
#include "stm32f3xx_ll_system.h"
#include "stm32f3xx_ll_rcc.h"
#include "stm32f3xx_ll_utils.h"

/********************************************************************************
 * NVIC Configuration.
 ********************************************************************************/

class Nvic {
    public:
        static void Init (void);
};


#endif /* NVIC_H_ */
