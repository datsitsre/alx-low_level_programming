#include "main.h"
#include <stdio.h>

/**
  *rev_string - print a reverse of a string
  *@s: the string to use
  */
void rev_string(char *s)
{
	int len = 0;
	int index = 0;

	if (s[index] == '\0')
		putchar('\n');

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (index = len - 1; s[index] != '\0'; index--)
	{
		putchar(s[index]);
	}
	printf("\n");
}
