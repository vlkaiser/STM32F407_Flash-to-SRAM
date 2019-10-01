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
/* Constants and Globals */		// Globals are stored in SRAM, Constants are stored in Flash 

//char my_data[] = "I love embedded programming";				//Stored in SRAM 0x200000000
char const my_data[] = "I love embedded programming";		//Stored in FLASH 0x08000342  (Read-Only)
char dest_data;
#define BASE_ADDRESS_OF_SRAM 0x20000000

/**************************************************************************************************************************/
/* Functions */
/** delay(void)
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
	char data;
	data = my_data[0];

	//Copy byte-by-byte from my_data to BASE_ADDRESS_OF_SRAM
	for (int i = 0; i< sizeof(my_data); i++)
	{
		*((uint8_t*)BASE_ADDRESS_OF_SRAM + i) = my_data[i];					//typecast as address: (uint8_t *)
																																//increment each SRAM receiving location: + i
																																//increment each FLASH byte in array [i]
																																//dereferencing address and storing my_data[i] in SRAM Location = *(...) = xxx
	/* Break at the for loop, and step through the code in debug mode (F10)
      watch memory from address 0x20000000 as values are copied		*/
	}
	
	return 0;
}
