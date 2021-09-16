#ifndef RESISTOR_COLOR_DUO_H
#define RESISTOR_COLOR_DUO_H

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
 * @brief determine color code from band colors
 * @param band color array
 * @retval color code or error code
 */
int color_code(const resistor_band_t band[]);

#endif
