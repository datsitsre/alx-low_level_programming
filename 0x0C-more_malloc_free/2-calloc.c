#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
  *_calloc - allocates memory for an array
  *@nmemb: numbe
  *@size: size
  *Return: 0
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int index_1;
	int number_1 = nmemb, number_2 = size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	for (index_1 = 0; index_1 < (number_1 * number_2); index_1++)
	{
		ptr[index_1] = 0;
	}
	return (ptr);
}
