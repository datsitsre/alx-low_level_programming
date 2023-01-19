#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
  *print_strings - prints a string
  *@separator: separator
  *@n: number of strings
  *Return:0
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int num;
	int count = n;
	char *output;

	va_start(ap, n);

	for (num = 0; num < count; num++)
	{
		if (separator != NULL && num  != 0)
		{
			printf("%s", separator);
		}
		output = va_arg(ap, char *);
		if (output == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", output);
	}
	printf("\n");
	va_end(ap);
}
