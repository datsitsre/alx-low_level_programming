#include "function_pointers.h"
#include <stdlib.h>

/**
  *int_index - searches for integer
  *@array: array
  *@size: size of array
  *@cmp: pointer
  *Return: 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index_1;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	index_1 = 0;
	while (index_1 < size)
	{
		if ((*cmp)(array[index_1]) == 1)
			return (index_1);
		index_1++;
	}
	return (-1);
}
