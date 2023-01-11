#include "main.h"
#include <stdlib.h>


/**
  *create_array - creates an array of chars
  *@size: the size of char
  *@c: the given
  *Return: NULL
  */
char *create_array(unsigned int size, char c)
{

	char *ptr;
	unsigned int index;


	ptr = malloc(size * sizeof(c));


	if (size == 0)
	{
		return (NULL);
	}

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		ptr[index] = c;
	}

	return (ptr);

}
