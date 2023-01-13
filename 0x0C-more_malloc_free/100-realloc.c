#include "main.h"
#include <stdlib.h>

/**
  *_realloc - reallocate memory
  *@ptr: pointer
  *@old_size: size of pointor
  *@new_size: new size of pointer
  *Return: 0
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_2;
	unsigned int index_1;


	if (new_size == old_size)
		return (ptr);

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr_2 = malloc(new_size);
		if (ptr_2 == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		ptr_2 = malloc(new_size);
		if (ptr_2 == NULL)
			return (ptr_2);
		for (index_1 = 0; index_1 < old_size; index_1++)
			ptr_2[index_1] = *((char *)ptr + 1);
		free(ptr);
	}
	return (ptr_2);
}
