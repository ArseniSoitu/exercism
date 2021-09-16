#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

enum { INVALID_INPUT = -1 };

typedef enum {
    BLACK,
	BROWN,
	RED,
	ORANGE,
	YELLOW,
    GREEN,
	BLUE,
	VIOLET,
	GREY,
	WHITE,
	COLORS_NUMBER
} resistor_band_t;

/*
 * @brief determine color code from band color
 * @param band color
 * @retval color code or error code
 */
int color_code(resistor_band_t band);

/*
 * @brief get supported colors
 * @param none
 * @retval supported colors array
 */
const resistor_band_t* colors(void);

#endif
