#include "hamming.h"
#include <string.h>

#define NOT_EQUAL_ERROR -1;
#define NULL_STRING_ERROR -1;

int compute(const char *lhs, const char *rhs)
{
	if (!lhs || !rhs)
	{
		return NULL_STRING_ERROR;
	}

	if (strlen(lhs) != strlen(rhs))
	{
		return NOT_EQUAL_ERROR;
	}

	size_t distance = 0;
	size_t length = strlen(lhs);

	for (size_t i = 0; i < length; ++i)
	{
		if (lhs[i] != rhs[i])
		{
			++distance;
		}
	}

	return distance;
}
