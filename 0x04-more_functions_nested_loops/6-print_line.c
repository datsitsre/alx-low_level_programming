#include "main.h"

/**
  *print_line - print the _ times
  *@n: the number of runs
  */
void print_line(int n)
{
	int index;

	for (index =0; index < n; index++)
	{
		if (n ==0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}

