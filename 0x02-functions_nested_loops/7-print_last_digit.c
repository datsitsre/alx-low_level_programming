#include "main.h"

/**
  *print_last_digit - print the last digit of a number
  *@n: the number to give to a function
  *Return: 0
  */
int print_last_digit(int n)
{
	int  number;

	if (n < 0)
	{
		n = -n;
		number  = n % 10;
	if (number < 0)
		number = -number;
		_putchar(number + '0');
	}
}
