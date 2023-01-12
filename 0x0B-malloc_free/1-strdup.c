#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  *_strdup - returns a pointer to a newly allocated space
  *@str: the string
  *Return: 0
  */
char *_strdup(char *str)
{
	 char *ptr;
	 int index = 0;
	 int index2;

	if (str == NULL)
		return (NULL);

	for (index2 = 0; str[index2] != '\0'; index2++)
		;

	 ptr = malloc(sizeof(char)  * (index2 + 1));
	
	 if (ptr == NULL)
		 return (NULL);

	while (str[index] != '\0')
	{
		ptr[index] = str[index];
		index++;
	}
	return (ptr);
}
