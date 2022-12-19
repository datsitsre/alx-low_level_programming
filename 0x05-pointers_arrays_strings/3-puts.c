#include "main.h"

/**
  *_puts - write a function tha produces a string
  *@str: the string
  */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	if (*str == '\0')
		_putchar('\n');


}
