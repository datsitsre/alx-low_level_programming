#include "main.h"

/**
  *_strncat - concatenates two strings
  *@dest: destination
  *@src: source
  *@n: the number of bi
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int index;

	while (*dest)
	{
		len++;
		dest++;
	}

	for (index = 0; ((index < n) && (src[index] != '\0'));  index++)
	{
		dest[len + index] = src[index];
	}
	return (dest);
}
