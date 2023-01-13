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
	int index_1, index_2, ptr_int;
	int len;

	if (ac == 0)
		return (NULL);

	for (index_1 = len = 0; index_1 < ac; index_1++)
	{
		if (av[index_1] == NULL)
			return (NULL);

		for (index_2 = 0; av[index_1][index_2] != '\0'; index_2++)
		{
			len++;
		}
		len++;
	}

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (index_1 = index_2 = ptr_int = 0; ptr_int < len; ptr_int++, index_2++)
	{
		if (av[index_1][index_2] == '\0')
		{
			ptr[ptr_int] = '\n';
			index_1++;
			index_2 = 0;
			ptr_int++;
		}
		if (ptr_int < len - 1)
			ptr[ptr_int] = av[index_1][index_2];
	}
	ptr[ptr_int] = '\0';
	return (ptr);
}

