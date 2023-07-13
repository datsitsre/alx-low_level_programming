#include "search_algos.h"

/**
 * recursive_search - search for a value
 * @array: input array
 * @size: size 
 * @value: value 
 * Return: 0 or index
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t index;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (index = 0; index < size; index++)
		printf("%s %d", (index == 0) ? ":" : ",", array[index]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
		return ((int)mid);

	if (value < array[mid])
		return (recursive_search(array, mid, value));
	mid++;

	return (recursive_search(array + mid, size - mid, value) + mid);
}

/**
 * binary_search - calls to binary search
 * @array: input array
 * @size: size 
 * @value: value 
 * Return: 0 or index
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
