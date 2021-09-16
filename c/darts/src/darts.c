#include "darts.h"
#include <math.h>

static float compute_radius(coordinate_t pt)
{
	return hypotf(pt.x, pt.y);
}

static uint8_t compute_score(float radius)
{
	return radius <= 1.0f ? 10 :
			radius <= 5.0f ? 5 :
		    radius <= 10.0f ? 1 : 0;
}

uint8_t score(coordinate_t point)
{
	float rad = compute_radius(point);

	return compute_score(rad);
}
