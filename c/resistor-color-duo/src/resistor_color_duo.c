#include "resistor_color_duo.h"

#define BANDS_NUMBER 2

int color_code(const resistor_band_t band[])
{
	for (int i = 0; i < BANDS_NUMBER; ++i)
	{
		if (band[i] < BLACK || band[i] > WHITE)
		    return INVALID_INPUT;
	}

	return band[0] * 10 + band[1];
}
