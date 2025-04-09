#ifndef t1
#define t1

#if(ARDUINO >=100)
 #include "arduino.h"
 #else
  #include "wprogram.h"
#endif

class ByteSense {
    public:
    //constructor


    //methods

    void begin(int bautRate=115200);

    private:
    bool _msg;

};
#endif