#include "acronym.h"
#include <string.h>
#include <ctype.h>
#include <malloc.h>

char *abbreviate(const char *phrase)
{
	if (!phrase)
	{
		return NULL;
	}

	if (strlen(phrase) == 0)
	{
		return NULL;
	}

	char* acronym = calloc(4, 1);
	acronym[0] = (char)toupper((unsigned char)phrase[0]);
	size_t index = 1;

	while (*(phrase++))
	{
		if (*phrase == ' ')
		{
			acronym[index++] = (char)toupper((unsigned char)(*(phrase + 1)));
		}
	}

	return acronym;
}
