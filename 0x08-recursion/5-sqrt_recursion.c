#include "main.h"

/**
  *_sqrt_recursion - natural square of a number
  *@n: natural number
  *Return: n
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);


	return (square_root_wrapper(n, 1));
}

/**
  *square_root_wrapper - the naturl root
  *@min:  mini
  *@max: maximum
  *Return: 0
  */
int square_root_wrapper(int min, int max)
{

	if (max * max == min)
		return (max);

	if  (max * max > min)
		return (-1);
	return (square_root_wrapper(min, max + 1));
}
