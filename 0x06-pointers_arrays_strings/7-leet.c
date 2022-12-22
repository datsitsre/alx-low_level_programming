#include "main.h"

/**
  *leet - encode a string
  *@c: the string to pass
  *Return: new string
  */
char *leet(char *c)
{
	int index;

	while (c[index] != '\0')
	{
		if (c[index] == 'a' || c[index] == 'A')
		{
			c[index] = '4';
		}
		else if (c[index] == 'e' || c[index] == 'E')
		{
			c[index] = '3';
		}
		else if (c[index] == 'o' || c[index] == 'O')
		{
			c[index] = '0';
		}
		else if (c[index] == 't' || c[index] == 'T')
		{
			c[index] = '7';
		}
		else if (c[index] == 'l' || c[index] == 'L')
		{
			c[index] = '1';
		}
		else
		{
		}
		index++;

	}

	return (c);
}
