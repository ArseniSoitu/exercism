#include "armstrong_numbers.h"
#include <math.h>

static int sum(int *a, int size, int exp)
{
	int s = 0;

	for(int k = 0; k < size; k += 1)
	{
		s += pow(a[k], exp);
	}

	return s;
}

bool is_armstrong_number(int candidate)
{
	int digits_number = 0;
	int k = candidate;
	int arr[100];

	if (candidate < 0)
	{
		return false;
	}

	do
	{
		arr[digits_number++] = k % 10;
		k /= 10;
	} while (k != 0);

	int s = sum(arr, digits_number, digits_number);

	return candidate == s;
}
