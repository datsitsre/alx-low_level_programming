#include "main.h"

/**
  *print_diagonal - print a diagonAL
  *@n: the number of times the diagonal will go
  *Return: 0 if n = 0
  */
void print_diagonal(int n)
{
	int index;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		for (index = 1 ; index < n; index++)
		{
			for (j = 0; j <= index; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
}
