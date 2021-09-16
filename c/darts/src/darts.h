#ifndef DARTS_H
#define DARTS_H

#include <stdint.h>

typedef struct {
	float x;
	float y;
} coordinate_t;

/*
 * @brief compute score from point
 * @param cartesian point
 * @retval point number
 */
uint8_t score(coordinate_t point);

#endif
