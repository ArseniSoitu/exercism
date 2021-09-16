#include "resistor_color_trio.h"
#include <math.h>

#define BANDS_NUMBER 3

resistor_value_t color_code(const resistor_band_t band[static 3])
{
	for (int i = 0; i < BANDS_NUMBER; ++i)
	{
		if (band[i] < BLACK || band[i] > WHITE)
		    return (resistor_value_t){-1, INVALID_BAND};
	}

	int value = band[0] * 10 + band[1];
	int pow10 = band[2];

	while(pow10--)
	{
		value *= 10;
	}

	return value % 1000 ? (resistor_value_t){value, OHMS} :
						  (resistor_value_t){value/1000, KILOOHMS};
}
