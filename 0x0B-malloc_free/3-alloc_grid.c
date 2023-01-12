#include "main.h"

/**
  *alloc_grid -  returns a pointer to a 2 dimensional
  *@width: the width
  *@height: the height 
  *Return: 0
  */
int **aloc_grid(int width, int height)
{

	int **ptr;
	int index_1, index_2;

	ptr = malloc(sizeof(int) * width * height);
	
	if (width == 0 || height == 0)
		return (NULL);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (index_1 = 0; index_1 < width; index_1++)
	{
		for (index_2 = 0; index_2 < height; index_2++)
		{
			ptr[width][height] = 0;
		}
	}


	return (ptr);

}
