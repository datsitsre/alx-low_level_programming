#include "main.h"

/**
  *_strlen_ewcursion - count the len of a string
  *@s: the string input
 *Return: count
 */
int _strlen_recursion(char *s)
{


	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

