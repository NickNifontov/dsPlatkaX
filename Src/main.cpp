/********************************************************************************
 * Include
 ********************************************************************************/

#include "main.h"

/********************************************************************************
 * Main program body
 ********************************************************************************/

int main (void) {

    Periphery::Init();

    while(1) {
    	LL_mDelay(100);
    }
}
