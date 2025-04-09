
#include "Arduino.h"

ByteSense_Qre mysensor;                // Created object

mysensor.pins(D5, D6, D7, D8, D9, A0); // defined pins (S0,S1,S2,S3,E,OP)

int sensordata[16];

int minval[16], maxval[16], tresholdval[16];

void setup()
{
    mysensor.init();
}

void loop()
{                                          // **** collect sensor data ****
    sensordata = mysensor.getdataAnalog(); // get all sensor data
    for (int i = 0 : i < 16, i++)
        Serial.print(sensordata[i]);
    Serial.println("");                     // ***collect sensor data***
    sensordata = mysensor.getdataDigital(); // get all sensor data
    for (int i = 0 : i < 16, i++)
        Serial.print(sensordata[i]);
    Serial.println("");
    mysensor.callibrate(minval, maxval, tresholdval); // get callibrated val.
}