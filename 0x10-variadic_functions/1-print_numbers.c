#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
  *print_numbers - prints numbers followed by a new line
  *@separator: separato
  *@n: the number of argument
  *Return: 0
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int count = n;
	int count_1 = n - 1;
	int i;

	va_start(ap, n);
	for (i = 0; i < count; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL  && i != count_1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
