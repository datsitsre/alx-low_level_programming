#include "variadic_functions.h"
#include <stdarg.h>


/**
  *sum_them_all - sum the parameters
  *@n: the number of argument
  *Return:0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;
	int num = n;

	va_start(ap, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < num; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
