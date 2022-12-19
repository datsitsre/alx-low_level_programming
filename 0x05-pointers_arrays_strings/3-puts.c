#include "main.h"

/**
  *_puts - write a function tha produces a string
  *@str: the string
  */
void _puts(char *str)
{
	do {
		_putchar(*str);
		str++;
	} while (*str);
	_putchar('\n');
}
