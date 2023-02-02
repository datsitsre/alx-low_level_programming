#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
  *binary_to_uint - convert a bits to decimal
  *@b: input char
  *Return: decimal or 0 if false
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int num;

	if (!b)
	{
		return (0);
	}

	for (num = 0; b[num]; num++)
	{
		if (b[num] == '1' || b[num] == '0')
		{
			sum = 2 * sum + (b[num] - '0');
		}
		else
			return (0);

	}
	return (sum);
}

