/**
 * Generated by Eclipse Mita 0.1.0.
 * @date 2019-08-01 18:17:36
 */


#include <stdbool.h>
#include <BSP_BoardShared.h>
#include <BCDS_MCU_GPIO.h>
#include <BSP_ExtensionPort.h>
#include <BCDS_Retcode.h>
#include "MitaExceptions.h"


Retcode_T BusGPIOTest_Setup(void)
{
	Retcode_T exception = RETCODE_OK;
	
	BSP_Board_Delay(2000);
	
	exception = BSP_ExtensionPort_Connect();
	if(RETCODE_OK != exception) {
		printf("ExtensionPort_Connect failed");
		return exception;
	}
	
	BSP_Board_Delay(5);
	
	exception = BSP_ExtensionPort_ConnectGpio(BSP_EXTENSIONPORT_GPIO_PB2);
	if(RETCODE_OK != exception) {
		printf("connection of pin PB2 failed\n");
		return exception;
	}
	
	exception = BSP_ExtensionPort_SetGpioConfig(BSP_EXTENSIONPORT_GPIO_PB2, BSP_EXTENSIONPORT_GPIO_PINMODE, BSP_EXTENSIONPORT_INPUT_PULLDOWN, NULL);
	if(RETCODE_OK != exception) {
		printf("configuring pin mode for pin PB2 failed\n");
		return exception;
	}
	
	exception = BSP_ExtensionPort_SetGpioConfig(BSP_EXTENSIONPORT_GPIO_PB2, BSP_EXTENSIONPORT_GPIO_PINVALUE, BSP_EXTENSIONPORT_GPIO_PIN_LOW, NULL);
	if(RETCODE_OK != exception) {
		printf("configuring pin value for pin PB2 failed\n");
		return exception;
	}
	
	exception = BSP_ExtensionPort_EnableGpio(BSP_EXTENSIONPORT_GPIO_PB2);
	if(RETCODE_OK != exception) {
		printf("enabling pin PB2 failed\n");
		return exception;
	}
	
	
	return exception;
	
	return NO_EXCEPTION;
}

Retcode_T BusGPIOTest_Enable(void)
{
	
	return NO_EXCEPTION;
}

/**
 * Provides read access to the inp signal.
 */
Retcode_T BusGPIOTest_Inp_Read(bool* result)
{
	return BSP_ExtensionPort_ReadGpio(BSP_EXTENSIONPORT_GPIO_PB2, result);
	
	return NO_EXCEPTION;
}

/**
 * Provides write access to the inp signal.
 */
Retcode_T BusGPIOTest_Inp_Write(bool* value)
{
	if(*value) {
		return BSP_ExtensionPort_SetGpio(BSP_EXTENSIONPORT_GPIO_PB2);
	} else {
		return BSP_ExtensionPort_ClearGpio(BSP_EXTENSIONPORT_GPIO_PB2);
	}
	
	return NO_EXCEPTION;
}



