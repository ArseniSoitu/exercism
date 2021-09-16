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

	char *original = malloc(strlen(phrase) + 1);
	memcpy(original, phrase, strlen(phrase) + 1);
	char *duplicate = malloc(strlen(phrase) + 1);
	memset(duplicate, '\0', strlen(phrase) + 1);

	int length = strlen(original);

	for (int i = 0; i < length; ++i)
	{
		original[i] = tolower((unsigned char)original[i]);
	}

	for (int i = 0; i < length; ++i)
	{
		if (!isalpha((unsigned char)original[i]))
		{
			duplicate[i] = original[i];
			continue;
		}

		if (strchr(duplicate, original[i]) != NULL)
		{
			free(duplicate);
			free(original);
			return false;
		}
		else
		{
			duplicate[i] = original[i];
		}
	}

	free(duplicate);
	free(original);
	return true;
}
