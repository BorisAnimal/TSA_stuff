#ifndef SENSORS_H
#define SENSORS_H

#include <stdio.h>

#include "TimEncoders/Nucleo_Encoder_16_bits.h"

class Sensors
{
public:
    // class constructor
    Sensors(Nucleo_Encoder_16_bits *motor_encoder,
            Nucleo_Encoder_16_bits *linear_encoder,
            AnalogIn *force_sensor
    );

    void resetLeftEncoder(void);
    void resetRightEncoder(void);

    int16_t getLeftCounts();
    int16_t getRightCounts();
    float getForce();

    ~Sensors();

private:
    Nucleo_Encoder_16_bits *left_encoder;
    Nucleo_Encoder_16_bits *right_encoder;
    AnalogIn *force_sensor;
};

#endif