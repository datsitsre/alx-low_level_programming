#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *str_concat - concate two strings
  *@s1: string one
  *@s2: string two
  *Return: string
  */
char *str_concat(char *s1, char *s2)
{
	int index, index2;
	char *ptr;


	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	for (index = 0; s1[index] != '\0'; index++)
	{
		ptr[index] = s1[index];
	}

	for (index2 = 0; s2[index2] != '\0'; index2++)
	{
		ptr[index2 + index] = s2[index2];
	}


	return (ptr);

	free(ptr);

}
