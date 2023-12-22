#include "../include/function.h"

float f_step(float x)
{
    return x < 0.0f ? 0.0f : 1.0f;
}

float f_ramp(float x)
{
    return x < 0.0f ? 0.0f : x;
}