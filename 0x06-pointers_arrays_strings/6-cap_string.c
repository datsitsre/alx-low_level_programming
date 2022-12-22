#include "main.h"

/**
  *cap_string - captalize a string
  *@c : input data
  *Return: c
  */
char *cap_string(char *c)
{
	int index = 0;

	while (c[index] != '\0')
	{
		if (c[index] == 32 || c[index] == '\t' || c[index] == '\n' || c[index] == ','
				|| c[index] == '.' || c[index] == ';' || c[index] == '!' || c[index] == '?'
				|| c[index] == '"' || c[index] == '(' || c[index] == ')' || c[index] == '}'
				|| c[index] == '{')
		{
			if (c[index + 1] >= 'A' && c[index + 1] <= 'Z')
			{
			}
			else if (c[index + 1] >= 'a' && c[index + 1] <= 'z')
			{
				c[index + 1] = c[index + 1] - 32;
			}
		}

		index++;
	}
	return (c);
}
