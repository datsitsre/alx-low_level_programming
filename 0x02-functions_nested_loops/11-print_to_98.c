#include <stdio.h>
#include "main.h"

/**
  *print_to_98 - print numbers from n to 98
  *@n: the number to print
  *Return: 0
  */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d ,", n);
		n++;
	}
}
