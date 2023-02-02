#include "main.h"


/**
  *print_binary - print the representation of a Number
  *@n: n
  *Return:0
  */
void print_binary(unsigned long int n)
{
	int index, count = 0;
	unsigned long int store;

	for (index = 63; index >= 0; index--)
	{
		store = n >> index;

		if (store & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

