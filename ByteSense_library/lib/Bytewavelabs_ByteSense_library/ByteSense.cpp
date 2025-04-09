#include "ByteSense.h"

void sensor::begin(int baudrate){
    Serial.begin(baudrate);
    if(_msg){
        Serial.println("The Sensor is Initialized");
    }
}