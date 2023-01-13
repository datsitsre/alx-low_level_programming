#include "main.h"
#include <stdlib.h>

/**
  *argstostr - arguments of your pgram
  *@ac: argument
  *@av: double pointer
  *Return: 0
  */
char *argstostr(int ac, char **av)
{

	char *ptr;
	int index_1, index_2;
	int len;


	for (index_1 = 0; index_1 < ac; index_1++)
	{
		if (av[index_1] == NULL)
			return (NULL);

		for (index_2 = 0; av[index_1][index_2] != '\0'; index_2++)
		{
			len++;
		}
	}

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (index_1 = 0; index_1 < len; index_1++)
	{
		for (index_2 = 0; index_2 < len; index_2++)
		{
			if (av[index_1][index_2] == '\0')
			{
				ptr[index_1] = '\n';
			}
			if (index_1 < len - 1)
				ptr[index_1] = av[index_1][index_2];
		}
	}
	ptr[index_1] = '\0';

	return (ptr);
}

