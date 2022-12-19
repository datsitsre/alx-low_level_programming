#include "main.h"

/**
  *print_rev - print a string in reverse
  *@s:  character to use
  */
void print_rev(char *s)
{
	int i = 0;
	int len = _strlen(s);

	for (len = 0; s[len] != '\0';len++)
	{
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
