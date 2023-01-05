#include "main.h"

/**
  *_strpbrk -  that searches a string
  *@s: matches
  *@accept: accent the char
  *Return: 0
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
