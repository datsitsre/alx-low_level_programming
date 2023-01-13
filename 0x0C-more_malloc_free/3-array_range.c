#include "main.h"
#include <stdlib.h>

/**
  *array_range - create an array
  *@min: mini
  *@max: maximum
  *Return: PTR
  */
int *array_range(int min, int max)
{
	int *ptr;
	int index_1;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (min + max + 1));

	if (ptr == NULL)
		return (NULL);

	for (index_1 = 0; min <= max; index_1++)
	{
		ptr[index_1] = min;
		min++;
	}

	return (ptr);


}
