/*
 * Nvic.cpp
 *
 *  Created on: Sep 9, 2020
 *      Author: RadaR
 */



/********************************************************************************
 * Include
 ********************************************************************************/

#include "Nvic.h"

/********************************************************************************
 * NVIC Configuration.
 ********************************************************************************/

void Nvic::Init (void) {
	  /* HRTIM1_Master_IRQn interrupt configuration */
	  NVIC_SetPriority(HRTIM1_Master_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),0, 0));
	  NVIC_EnableIRQ(HRTIM1_Master_IRQn);
	  /* HRTIM1_TIMB_IRQn interrupt configuration */
	  NVIC_SetPriority(HRTIM1_TIMB_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),0, 0));
	  NVIC_EnableIRQ(HRTIM1_TIMB_IRQn);
	  /* HRTIM1_FLT_IRQn interrupt configuration */
	  NVIC_SetPriority(HRTIM1_FLT_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),0, 0));
	  NVIC_EnableIRQ(HRTIM1_FLT_IRQn);
	  /* ADC1_2_IRQn interrupt configuration */
	  NVIC_SetPriority(ADC1_2_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),1, 0));
	  NVIC_EnableIRQ(ADC1_2_IRQn);
	  /* PVD_IRQn interrupt configuration */
	  NVIC_SetPriority(PVD_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),3, 0));
	  NVIC_EnableIRQ(PVD_IRQn);
	  /* EXTI15_10_IRQn interrupt configuration */
	  NVIC_SetPriority(EXTI15_10_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),3, 0));
	  NVIC_EnableIRQ(EXTI15_10_IRQn);
	  /* DMA1_Channel4_IRQn interrupt configuration */
	  NVIC_SetPriority(DMA1_Channel4_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),4, 0));
	  NVIC_EnableIRQ(DMA1_Channel4_IRQn);
	  /* DMA1_Channel5_IRQn interrupt configuration */
	  NVIC_SetPriority(DMA1_Channel5_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),4, 0));
	  NVIC_EnableIRQ(DMA1_Channel5_IRQn);
	  /* USART1_IRQn interrupt configuration */
	  NVIC_SetPriority(USART1_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),5, 0));
	  NVIC_EnableIRQ(USART1_IRQn);

	  /* SysTick */
	  NVIC_SetPriority(SysTick_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),6, 0));
	  NVIC_EnableIRQ(SysTick_IRQn);
};
