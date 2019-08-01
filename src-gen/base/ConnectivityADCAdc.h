/**
 * Generated by Eclipse Mita 0.1.0.
 * @date 2019-08-01 18:17:36
 */


#ifndef CONNECTIVITYADC_ADC_H
#define CONNECTIVITYADC_ADC_H

#include <stdint.h>
#include <BCDS_Retcode.h>


/**
 * Sets up the ADC.
 */
Retcode_T ConnectivityADCAdc_Setup(void);

/**
 * Enables the ADC sensor.
 */
Retcode_T ConnectivityADCAdc_Enable(void);

/**
 * Provides read access to o2.
 */
Retcode_T ConnectivityADCAdc_O2_Read(uint16_t* result);

/**
 * Provides write access to o2.
 */
Retcode_T ConnectivityADCAdc_O2_Write(uint16_t* result);


#endif
