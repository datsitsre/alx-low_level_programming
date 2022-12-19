#include "main.h"

/**
  *_strlen - return the len of a string
  *@s : the input string
  *Return: count 
  */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
