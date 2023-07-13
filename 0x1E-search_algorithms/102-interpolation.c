#include "search_algos.h"


/**
 * interpolation_search - search value in array
 * @array: input
 * @size: size
 * @value: value
 * Return: 0 or index
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, low, high;
	double fin;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		fin = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		position = (size_t)(low + fin);
		printf("Value checked array[%d]", (int)position);

		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[position]);
		}

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;

		if (low == high)
			break;
	}

	return (-1);
}
