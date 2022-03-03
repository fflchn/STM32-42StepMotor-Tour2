#include "stm32f10x.h"
#include "bsp_led.h"

void Delay_ms(uint32_t nCount){
	#if 1
			//note that the range of nCount 
	    //must be consistant with the data type uint32_t
			nCount = nCount*8000;
			while(nCount-- > 0);
	#else
			__IO uint16_t i = 0;
			while(nCount-- > 0){
				while(i++ < 8000);
				i = 0;
			}	
	#endif
};

int main(void)
{
  #if 0
  while(1){
			Delay_ms(1000);	
		}	
	#else
	 LED_GPIO_Config();
	 LEDR_OFF;
	 //The following delay is not shown in the video
	 Delay_ms(2000);
	
	 uint8_t counter = 21;
	 while(counter-- > 0){
		  LedR_Toggle;
			Delay_ms(1000);	
	 }
	 #endif
}


