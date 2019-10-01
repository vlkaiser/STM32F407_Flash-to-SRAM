/***************************************************************************************************************************
* This file is subject to the terms and conditions defined in file 'LICENSE.txt', 
* which is part of this source code package. 
*
* Project									: Copy contents from FLASH to SRAM
* Program Name						: STM32F407_Disc_Flash-to-SRAM.uvprojx
* Author									: vkaiser
* Date Created						: Oct 01, 2019
* 
* Purpose									: Memory location study - write to Flash, read from Flash, write to SRAM, read from SRAM.
*
*														
* MCU											: STM32F407VGT6
* Language								: C
* Hardware Modifications	: N/A
* Debugger								: ST-Link Debugger (on-board)
*
* Repo / Revision History	: https://github.com/vlkaiser/STM32F407_Disc_Flash-to-SRAM
*
* - Special Setup -
* Keil Pack Installer 		: Device Specific DFP
*													:
*		
* Revision History				:
* 	Date				Author			Notes
* 	10012019		vkaiser			- Initial commit
*
***************************************************************************************************************************/
#include <stdint.h>	

/**************************************************************************************************************************/
/* Functions */
/**
  \fn          void delay(void)
  \brief       Use a counter as a program wait function
  \returns		 Nothing - ?
**/
void delay(void)
{
	uint32_t i = 0;						//shorthand type, but must include stdint.h
	for(i=0; i<1000000; i++);
}

/**************************************************************************************************************************/
/* Main */
int main(void)
{
	/* Initialize: */
	
	/* Do this forever: */
	while(1)
		{	
			
		}

	return 0;
}
