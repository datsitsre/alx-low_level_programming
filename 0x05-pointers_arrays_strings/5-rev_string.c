#include "main.h"
#include <stdio.h>

/**
  *rev_string - print a reverse of a string
  *@s: the string to use
  */
void rev_string(char *s)
{
	int index = 0;
	int len;

	if (s[index] == '\0')
		putchar('\n');
       
	len  = sizeof(s) + 1;
	for (index = len; index>= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
	
	/**for (index = sizeof(s) - 1; s[index] < sizeof(s); index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
	*/
}
