#include "stdafx.h"
#include "w32(2).h"
#include "math.h"
#define PI 3.14

float FAC::Convert(float deg)
{
	float radian;
	radian = PI / 180 * deg;
	return radian;
}