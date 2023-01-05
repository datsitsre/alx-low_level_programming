#include "main.h"

/**
  *_strchr - locates a characyer in a string
  *@s: string
  *@c: character to add
  *Return: a
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
