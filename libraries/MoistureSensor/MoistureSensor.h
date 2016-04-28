#ifndef _MoistureSensor_h
#ifdef __cplusplus
#define _MoistureSensor_h

#include <inttypes.h>

class MoistureSensor {

public:
    MoistureSensor(uint8_t analogPin, uint8_t numReadings);
    void reset();
    void read();
    int getSmoothedReading();
    
private:
    uint8_t numReadings;
    uint8_t readingIndex;
    uint8_t analogPin;
    int*  recents;
    
};

#endif // __cplusplus
#endif /* _MoistureSensor_h */
