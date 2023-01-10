#include "main.h"

/**
  *_strcpy - print some values
  *@dest: destination
  *@src: sourc
  *Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int index, len;


	index = 0;
	while (src[index] != '\0')
		index++;

	for (len = 0; len  <= index ; len++)
	{
		dest[len] = src[len];
	}
	return (dest);

}

