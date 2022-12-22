#include "main.h"

/**
  *leet - encode a string
  *@c: the string to pass
  *Return: new string
  */
char *leet(char *c)
{
	int index;
	int index2;

	char letters[] = "aAeEoOtTlL";
	char repl[] =    "4433007711";

	index = 0;
	while (c[index] != '\0')
	{
		index2 = 0;

		while (letters[index2] != '\0')
		{
			if (c[index] == letters[index2])
			{
				c[index] = repl[index2];
			}
			index2++;
		}
		index++;
	}
	return (c);

}
