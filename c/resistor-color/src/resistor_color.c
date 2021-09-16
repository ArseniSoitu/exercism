#include "resistor_color.h"

static resistor_band_t colors_arr[COLORS_NUMBER] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};

int color_code(resistor_band_t band)
{
	if (band < BLACK || band > WHITE)
	    return INVALID_INPUT;

	return band;
}

const resistor_band_t* colors(void)
{
	return colors_arr;
}
