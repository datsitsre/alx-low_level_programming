#include "main.h"
#include <stdio.h>

/**
  *more_numbers - a function thAT PRINT ten times the numbers
  *Return: 0
  */
void more_numbers(void)
{
	int index;
	int  index1;

	for (index = 0; index <= 10; index++)
	{
		for (index1 = 0; index1 < 15; index1++)
		{
			if (index1 >= 10)
				_putchar('1');
			_putchar((index1 % 10) + '0');
		}
		_putchar('\n');
	}
}

