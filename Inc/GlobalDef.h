/*
 * GlobalDef.h
 *
 *  Created on: Sep 9, 2020
 *      Author: RadaR
 */

#ifndef GLOBALDEF_H_
#define GLOBALDEF_H_

/********************************************************************************
 * MCU Defines
 ********************************************************************************/

/*
#define STM32F334x8

#define EXTERNAL_CLOCK_VALUE		(uint32_t)(8000000)
#define HSE_VALUE					(uint32_t)(12000000)
#define HSE_STARTUP_TIMEOUT			(uint32_t)(100)
#define LSE_STARTUP_TIMEOUT			(uint32_t)(5000)
#define LSE_VALUE					(uint32_t)(32768)
#define VDD_VALUE					(uint32_t)(3300)
#define LSI_VALUE					(uint32_t)(40000)
#define HSI_VALUE					(uint32_t)(8000000)
#define USE_FULL_LL_DRIVER
#define PREFETCH_ENABLE				(uint32_t)(1)
*/

#ifndef NVIC_PRIORITYGROUP_0
#define NVIC_PRIORITYGROUP_0         ((uint32_t)0x00000007) /*!< 0 bit  for pre-emption priority,
                                                                 4 bits for subpriority */
#define NVIC_PRIORITYGROUP_1         ((uint32_t)0x00000006) /*!< 1 bit  for pre-emption priority,
                                                                 3 bits for subpriority */
#define NVIC_PRIORITYGROUP_2         ((uint32_t)0x00000005) /*!< 2 bits for pre-emption priority,
                                                                 2 bits for subpriority */
#define NVIC_PRIORITYGROUP_3         ((uint32_t)0x00000004) /*!< 3 bits for pre-emption priority,
                                                                 1 bit  for subpriority */
#define NVIC_PRIORITYGROUP_4         ((uint32_t)0x00000003) /*!< 4 bits for pre-emption priority,
                                                                 0 bit  for subpriority */
#endif


#endif /* GLOBALDEF_H_ */
