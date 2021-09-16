#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H

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

typedef enum {
	OHMS,
	KILOOHMS,
	INVALID_BAND
} units_t;

typedef struct {
	int value;
	units_t unit;
}resistor_value_t;

/*
 * @brief determine color code from band colors
 * @param band color array
 * @retval color code or error code
 */
resistor_value_t color_code(const resistor_band_t band[]);

#endif
