#include "main.h"

/**
  *print_most_numbers -  print 0 -9 without 2  and 4
  *Return: 0
  */
void print_most_numbers(void)
{
	for (char c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
			continue;

	_putchar(c);
	}
	_putchar('\n');
}
