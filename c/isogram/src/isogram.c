#include "isogram.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

bool is_isogram(const char phrase[])
{
	if (phrase == NULL)
	{
		return false;
	}

	if (strlen(phrase) == 0)
	{
		return true;
	}

	int appearances[26];
	memset(appearances, 0, sizeof(appearances));

	int length = strlen(phrase);
	char symbol;

	for (int i = 0; i < length; ++i)
	{
		symbol = tolower((unsigned char)phrase[i]);

		if (!isalpha((unsigned char)symbol))
		{
			continue;
		}

		if (appearances[(int)(symbol - 'a')]++)
		{
			return false;
		}
	}

	return true;
}
