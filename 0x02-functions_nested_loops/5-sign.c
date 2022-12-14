#include "main.h"

/**
 *print_sign - print a sign number
 *@n: value to check
 *Return: 1 if greater zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}

}
