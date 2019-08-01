/**
 * Generated by Eclipse Mita 0.1.0.
 * @date 2019-08-01 18:17:36
 */


#ifndef CONNECTIVITYMQTT_MQTT_H
#define CONNECTIVITYMQTT_MQTT_H

#include <BCDS_Retcode.h>


/**
 * Sets up the MQTT.
 */
Retcode_T ConnectivityMQTTMqtt_Setup(void);

/**
 * Enables the MQTT sensor.
 */
Retcode_T ConnectivityMQTTMqtt_Enable(void);

/**
 * Provides read access to light.
 */
Retcode_T ConnectivityMQTTMqtt_Light_Read(char** result);

/**
 * Provides write access to light.
 */
Retcode_T ConnectivityMQTTMqtt_Light_Write(char** result);
/**
 * Provides read access to o2.
 */
Retcode_T ConnectivityMQTTMqtt_O2_Read(char** result);

/**
 * Provides write access to o2.
 */
Retcode_T ConnectivityMQTTMqtt_O2_Write(char** result);
/**
 * Provides read access to temp.
 */
Retcode_T ConnectivityMQTTMqtt_Temp_Read(char** result);

/**
 * Provides write access to temp.
 */
Retcode_T ConnectivityMQTTMqtt_Temp_Write(char** result);
/**
 * Provides read access to pres.
 */
Retcode_T ConnectivityMQTTMqtt_Pres_Read(char** result);

/**
 * Provides write access to pres.
 */
Retcode_T ConnectivityMQTTMqtt_Pres_Write(char** result);
/**
 * Provides read access to humi.
 */
Retcode_T ConnectivityMQTTMqtt_Humi_Read(char** result);

/**
 * Provides write access to humi.
 */
Retcode_T ConnectivityMQTTMqtt_Humi_Write(char** result);
/**
 * Provides read access to co2.
 */
Retcode_T ConnectivityMQTTMqtt_Co2_Read(char** result);

/**
 * Provides write access to co2.
 */
Retcode_T ConnectivityMQTTMqtt_Co2_Write(char** result);
/**
 * Provides read access to tvoc.
 */
Retcode_T ConnectivityMQTTMqtt_Tvoc_Read(char** result);

/**
 * Provides write access to tvoc.
 */
Retcode_T ConnectivityMQTTMqtt_Tvoc_Write(char** result);
/**
 * Provides read access to mc10.
 */
Retcode_T ConnectivityMQTTMqtt_Mc10_Read(char** result);

/**
 * Provides write access to mc10.
 */
Retcode_T ConnectivityMQTTMqtt_Mc10_Write(char** result);
/**
 * Provides read access to mc25.
 */
Retcode_T ConnectivityMQTTMqtt_Mc25_Read(char** result);

/**
 * Provides write access to mc25.
 */
Retcode_T ConnectivityMQTTMqtt_Mc25_Write(char** result);
/**
 * Provides read access to mc40.
 */
Retcode_T ConnectivityMQTTMqtt_Mc40_Read(char** result);

/**
 * Provides write access to mc40.
 */
Retcode_T ConnectivityMQTTMqtt_Mc40_Write(char** result);
/**
 * Provides read access to mc100.
 */
Retcode_T ConnectivityMQTTMqtt_Mc100_Read(char** result);

/**
 * Provides write access to mc100.
 */
Retcode_T ConnectivityMQTTMqtt_Mc100_Write(char** result);
/**
 * Provides read access to partical_s.
 */
Retcode_T ConnectivityMQTTMqtt_Partical_s_Read(char** result);

/**
 * Provides write access to partical_s.
 */
Retcode_T ConnectivityMQTTMqtt_Partical_s_Write(char** result);


#endif