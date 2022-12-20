#include "main.h"

/**
  *_strcpy - print some values
  *@dest: destination
  *@src: source 
  *Return: dest
  */
char * _strcpy(char *dest, char *src)
{
	int index , len;


	index = 0;
	while (src[index] != '\0')
		index++;

	for (len = 0; src[len] != '\0' ; len++)
	{
		dest[len] = src[len];
	}
	return (dest);

}

