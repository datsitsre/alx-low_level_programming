#include "main.h"

/**
  *string_toupper - to upper case
  *@c: the input 
  *Return: a string
  */
char *string_toupper(char *c)
{
	int index;

	for (index = 0; c[index] != '\0'; index++)
	{
		if (c[index] >= 'a' && c[index] <= 'z')
			c[index] = c[index] - 32;
	}
	return (c);
}
