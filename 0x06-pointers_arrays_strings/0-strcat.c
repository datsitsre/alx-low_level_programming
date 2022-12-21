#include "main.h"

/**
  *_strcat - concatenates two strings
  *@dest: destination
  *@src: source
  *Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int index;

	while (*dest)
	{
		len++;
		dest++;
	}



	for (index = 0; src[index] != '\0'; index++)
		dest[len + index] = src[index];
	dest[len + index] = '\0';
	return (dest);
}
