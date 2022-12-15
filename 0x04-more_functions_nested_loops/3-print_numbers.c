#include "main.h"

/**
  *print_numbers -  print numbers from 0 to 9
  *Return: numbers
  */
void print_numbers(void)
{
	char c = 48;

	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
