/******************************************************************************
 * The Mechatronics Revolution: Fundamentals and Core Concepts
 * Code Template for Lab Assignment 4
 *
 * Note: Create a new project as described in Lab Assignment 1.
 * After including the DriverLib library in your project settings,
 * you can use this template to design your program for Lab Assignment 4. 
 *
 * This template follows the steps described in the Software Architecture
 * section (Section 4.6) of the Lab Assignment 4 document.
*******************************************************************************/

/* Include header files */
#include "driverlib.h"
#include "mechrev.h"
#include "macros.h"
#include <stdint.h>
#include <stdbool.h>

/* Define macros and function prototypes if needed */
void TA0_0_IRQHandler(void);
/* Define configuration structs if needed */
//------------

Timer_A_PWMConfig pwmConfig =
{
TIMER_A_CLOCKSOURCE_SMCLK, // tie Timer A to SMCLK
TIMER_A_CLOCKSOURCE_DIVIDER_1, //No divider we'll use DCOfreq 3.0MHz--> period=1/3.0MHz=0.33us
10000, //Our period=3.3ms; clock period ticks=3.3ms/0.33us=10000 clock ticks
TIMER_A_CAPTURECOMPARE_REGISTER_3, //CCR1 location register of TA0.1,P2.4-->1A---->LM
TIMER_A_OUTPUTMODE_RESET_SET, // Module 7 functionality (PWM signal)
0 // Set duty cycle to 33%; 0.33*10000=3300
};

//Timer_A_PWMConfig pwmConfig2 =
//{
//TIMER_A_CLOCKSOURCE_SMCLK,
//TIMER_A_CLOCKSOURCE_DIVIDER_1,
//10000,
//TIMER_A_CAPTURECOMPARE_REGISTER_2, //CCR2 location register of TA0.2,P2.5-->2A-----&RM
//TIMER_A_OUTPUTMODE_RESET_SET,
//3300
//};
//Timer_A_PWMConfig pwmConfig3 =
//{
//TIMER_A_CLOCKSOURCE_SMCLK,
//TIMER_A_CLOCKSOURCE_DIVIDER_1,
//10000,
//TIMER_A_CAPTURECOMPARE_REGISTER_3, //CCR3 location register of TA0.3,P2.6-->3A-----&RM
//TIMER_A_OUTPUTMODE_RESET_SET,
//3300
//};
//Timer_A_PWMConfig pwmConfig4 =
//{
//TIMER_A_CLOCKSOURCE_SMCLK,
//TIMER_A_CLOCKSOURCE_DIVIDER_1,
//10000,
//TIMER_A_CAPTURECOMPARE_REGISTER_4, //CCR4 location register of TA0.4,P2.7-->4A--->LM
//TIMER_A_OUTPUTMODE_RESET_SET,
//3300
//};
/* Declare global variables if needed */

/* Main program */
void main(void)
{
    /* Stop Watchdog Timer */
    WDT_A_holdTimer();

    /* Call the mechrev_setup function included in the mechrev.h header file */
    mechrev_setup();

    /* Clock Configuration */
//    MAP_CS_setDCOFrequency


    /* Initialize GPIOs P1.1 and P1.4 for PushButtons (S1 and S2 switches) */
    MAP_GPIO_setAsInputPinWithPullUpResistor(BTN1_PIN);
    MAP_GPIO_setAsInputPinWithPullUpResistor(BTN2_PIN);
    /* Initialize GPIOs P1.6 and P1.7 for Motor Driver IC Enable Pins */
    MAP_GPIO_setAsOutputPin(MOTORR);
    MAP_GPIO_setOutputHighOnPin(MOTORR);
    MAP_GPIO_setAsOutputPin(MOTORL);
    MAP_GPIO_setOutputHighOnPin(MOTORL);
    /* Initialize GPIOs P2.4, P2.5, P2.6 and P2.7 for PWM functionality  */
    MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2, GPIO_PIN4|GPIO_PIN5|GPIO_PIN6|GPIO_PIN7,
    GPIO_PRIMARY_MODULE_FUNCTION);

    /* Initialize Timer A0 to generate PWM signals */
    MAP_Timer_A_generatePWM(TIMER_A0_BASE,&pwmConfig);
//    MAP_Timer_A_generatePWM(TIMER_A0_BASE,&pwmConfig2);
//    MAP_Timer_A_generatePWM(TIMER_A0_BASE,&pwmConfig3);
//    MAP_Timer_A_generatePWM(TIMER_A0_BASE,&pwmConfig4);

//    MAP_Timer_A_clearInterruptFlag(TIMER_A0_BASE);
//    MAP_Timer_A_enableCaptureCompareInterrupt(TIMER_A0_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_0);
//    MAP_Timer_A_enableCaptureCompareInterrupt(TIMER_A0_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_1);
//    MAP_Timer_A_enableCaptureCompareInterrupt(TIMER_A0_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_2);
//      MAP_Timer_A_enableCaptureCompareInterrupt(TIMER_A0_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_3);
//    MAP_Timer_A_enableCaptureCompareInterrupt(TIMER_A0_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_4);

    /* Declare local variables if needed */

    /* Call the initialization grading macro */
    MACRO_LAB4_INIT();

    while(1)
    {

        /* Design a Polling process to detect PushButtons press and adjust the PWM duty cycles accordingly */
        if (MAP_GPIO_getInputPinValue(BTN1_PIN) == GPIO_INPUT_PIN_LOW){
            printf("btn 1\n");

            TA0CCR1 = 3300;
            TA0CCR2 = 0;
            TA0CCR3 = 3300;
            TA0CCR4 = 0;

            MAP_GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN6);
            MAP_GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN7);

            MAP_GPIO_setOutputHighOnPin(GPIO_PORT_P2, GPIO_PIN4);
            MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN5);





        }
        else if (MAP_GPIO_getInputPinValue(BTN2_PIN) == GPIO_INPUT_PIN_LOW){
            printf("btn 2\n");
        }
            /* Note: Call the event grading macro after changing PWMs */
//            MACRO_LAB4_EVENT();
    }
}

void TA0_0_IRQHandler(void)
{


    MAP_Timer_A_clearCaptureCompareInterrupt(TIMER_A0_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_0);
    MAP_Timer_A_clearCaptureCompareInterrupt(TIMER_A0_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_1);
    MAP_Timer_A_clearCaptureCompareInterrupt(TIMER_A0_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_2);
    MAP_Timer_A_clearCaptureCompareInterrupt(TIMER_A0_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_3);
    MAP_Timer_A_clearCaptureCompareInterrupt(TIMER_A0_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_4);
}

