#include "main.h"

/**
  *rot13 - encodes a string
  *@c: input variable
  *Return: c
  */
char *rot13(char *c)
{
	int index = 0;

	while (c[index] != '\0')
	{
		while ((c[index] >= 'A' && c[index] <= 'z') ||
				(c[index] >= 'a' && c[index] <= 'z'))
		{
			if ((c[index] >= 'A' && c[index] <= 'M') ||
					(c[index] >= 'a' && c[index] <= 'm'))
			{
				c[index] = c[index] + 13;
			}
			else
			{
				c[index] = c[index] - 13;
			}
			index++;
		}
		index++;
	}
	return (c);
}
