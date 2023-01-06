#include "main.h"

/**
  *factorial - print factorial
  *@n: the input value
  *Return: 0 for 0! and n for numbers!
  */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
