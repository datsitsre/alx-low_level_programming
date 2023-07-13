#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for a value
 * @array: input
 * @size: size
 * @value: value
 * Return: 0 or index
 */
int jump_search(int *array, size_t size, int value)
{
	int i, mid, p, key;

	if (array == NULL || size == 0)
		return (-1);

	mid = (int)sqrt((double)size);
	key = 0;
	p = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		key++;
		p = i;
		i = key * mid;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", p, i);

	for (; p <= i && p < (int)size; p++)
	{
		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		if (array[p] == value)
			return (p);
	}

	return (-1);
}
