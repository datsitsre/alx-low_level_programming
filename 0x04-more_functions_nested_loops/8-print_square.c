#include "main.h"

/**
 * print_square - print a square like shape
 * @size: the sizwe of the shape
 * Return: 0 if n less or equal to zero
 *
 */
void print_square(int size)
{
	int index;
	int index2;

	if (size <= 0)
		_putchar('\n');
	for (index = 0; index < size; index++)
	{
		for (index2 = 0; index2 < size; index2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
