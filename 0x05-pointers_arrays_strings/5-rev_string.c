#include "main.h"
#include <stdio.h>

/**
  *rev_string - print a reverse of a string
  *@s: the string to use
  */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	len = len - 1;
	while (s[len])
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
