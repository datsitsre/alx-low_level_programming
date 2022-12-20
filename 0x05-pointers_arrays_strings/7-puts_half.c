#include "main.h"
#include <stdio.h>

/**
  *puts_half - print half of a string
  *@str:  string
  */
void puts_half(char *str)
{
	int len  = 0;
	int index  = 0;

	while (str[index])
	{
		index++;
	}

	if (len % 2 == 0)
	{
		len = index / 2;

		while (str[len])
		{
			_putchar(str[len]);
			len++;
		}
	}
	else
	{
		len = (len - 1) / 2;
		while (str[len])
		{
			_putchar(str[len]);
			len++;
		}

		_putchar('\n');
	}
}
