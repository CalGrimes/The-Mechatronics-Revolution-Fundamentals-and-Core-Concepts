/******************************************************************************
 * The Mechatronics Revolution: Fundamentals and Core Concepts
 * Lab Assignment 3: MSP432 LaunchPad Example Project
 *
 * Description: An example project that uses DriverLib to
 * read LaunchPad's pushbuttons and turn on LEDs
 *
 * Revision: 1.0
 * Date: March 2020
*******************************************************************************/
//#include "mechrev.h"
/* DriverLib Include */
#include "driverlib.h"
#include "mechrev.h"

#include "macros.h"

/* Function prototype */
void lab3_initialization(void);
void PORT4_IRQHandler(void);


void main(void)
{
    int i;
//    uint32_t counter = 0;
//    bool flag = 0;

//    mechrev_setup();

    WDT_A_holdTimer(); // stop watchdog timer

    /* Call the mechrev_setup function included in the mechrev.h header file */
    mechrev_setup();

    /* GPIO initialization */
    lab3_initialization();


    while(1)
    {
        // Task 1: S1 or S2 pressed LED1 on
        if (MAP_GPIO_getInputPinValue(BTN1_PIN) == GPIO_INPUT_PIN_LOW || MAP_GPIO_getInputPinValue(BTN2_PIN) == GPIO_INPUT_PIN_LOW)
        {
            MAP_GPIO_setOutputHighOnPin(LED1_PIN);

            for (i=0; i<10000; i++) { } // switch debouncing
            MACRO_LAB3_EVENT();
        }
        else
        {
            MAP_GPIO_setOutputLowOnPin(LED1_PIN);
        }

    }
}

void lab3_initialization(void)
{
    /* GPIO configuration */

    //Inputs
    //Pushbuttons
    MAP_GPIO_setAsInputPinWithPullUpResistor(BTN1_PIN);
    MAP_GPIO_setAsInputPinWithPullUpResistor(BTN2_PIN);

    //Outputs
    //LEDs
    MAP_GPIO_setAsOutputPin(LED1_PIN);
    MAP_GPIO_setAsOutputPin(LEDR_PIN);
    MAP_GPIO_setAsOutputPin(LEDG_PIN);
    MAP_GPIO_setAsOutputPin(LEDB_PIN);

    MAP_GPIO_setOutputLowOnPin(LED1_PIN);
    MAP_GPIO_setOutputLowOnPin(LEDR_PIN);
    MAP_GPIO_setOutputLowOnPin(LEDG_PIN);
    MAP_GPIO_setOutputLowOnPin(LEDB_PIN);

    MACRO_LAB3_INIT();
}


