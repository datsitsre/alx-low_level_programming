#include "main.h"

/**
  *puts2 - print every other character of
  *@str: the string to print
  */
void puts2(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] % 2 == 0)
			_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
