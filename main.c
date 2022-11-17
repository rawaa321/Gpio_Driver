/**
  ******************************************************************************
  * @file    main.c
  * @author  Balhoudi Rawaa
  * @brief   Bit Mask 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "GPIO.h"


/* Private define ------------------------------------------------------------*/
/*----------------Private Functions Prototype---------------------------------*/


/* Private variables ---------------------------------------------------------*/

int main()
{
  GPIO_Clock_Enable(GPIOD);
  
  GPIO_Config(GPIOA,PIN12,OUTPUT,OUTPUT_OPEN_DRAIN);
  


  while(1)
  {
   
  }
}



/**************************************END OF FILE**************************************/

/**************************************END OF FILE**************************************/
