#include "main.h"

/**
  *print_diagonal - print a diagonAL
  *@n: the number of times the diagonal will go
  */
void print_diagonal(int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar(96);
	}
	_putchar('\n');
}
