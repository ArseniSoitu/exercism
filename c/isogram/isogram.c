#include "isogram.h"
#include <ctype.h>
#include <stdlib.h>

bool is_isogram(const char phrase[])
{
	if (phrase == NULL)
	{
		return false;
	}

	if (*phrase == '\0')
	{
		return true;
	}

	int appearances[26] = {0};
	char symbol;

	do {
		symbol = tolower((unsigned char)(*phrase));

		if (!isalpha((unsigned char)symbol))
		{
			continue;
		}

		if (appearances[(int)(symbol - 'a')]++)
		{
			return false;
		}
	} while(*phrase++);

	return true;
}
