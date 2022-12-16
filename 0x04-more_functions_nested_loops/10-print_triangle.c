#include "main.h"

/**
  *print_triangle - print a triangle on the screen
  *@size : size of the triangle
  *Return : 0
  */
void print_triangle(int size)
{
	int index;
	int index2;

	if (size <= 0)
		_putchar('\n');
	for (index = 1; index <= size; index++)
	{

		for (index2 = index; index2 <= size; index2++)
		{
			_putchar(' ');
		}
		for (index2 = 1; index2 <= index; index2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

