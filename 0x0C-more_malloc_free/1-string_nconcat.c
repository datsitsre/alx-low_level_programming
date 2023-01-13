#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *str_concat - concate two strings
  *@s1: string one
  *@s2: string two
  *Return: string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, index2;
	char *ptr;
	int number_1 = n;


	if (s1 == NULL)
		s1  = "";
	if (s2 == NULL)
		s2 = "";
	if (number_1 < 0)
		return (NULL);
	if (n >= strlen(s2))
		n = strlen(s2);


	ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; s1[index] != '\0'; index++)
	{
		ptr[index] = s1[index];
	}

	for (index2 = 0; s2[index2] != '\0'; index2++)
	{
		ptr[index2 + index] = s2[index2];
	}

	for (index2 = 0; index2 < n; index2++)
	{
		ptr[index2 + index] = s2[index2];
	}

	ptr[index2 + index] = '\0';

	return (ptr);

}
