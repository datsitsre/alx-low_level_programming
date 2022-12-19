#include "main.h"

/**
  *_puts - write a function tha produces a string  
  *@s: the string
  */
void _puts(char *str)
{
	do
	{
		_putchar(*str);
		str++;
	}while (*str != '\0');
	_putchar('\n');
}
