#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid -  returns a pointer to a 2 dimensional
  *@width: the width
  *@height: the height 
  *Return: 0
  */
int **alloc_grid(int width, int height)
{

	int **ptr;
	int index_1, index_2;

	ptr = malloc(sizeof(int *) *  height);
	

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (index_1 = 0; index_1 < height; index_1++)
	{
		ptr[index_1] = (int *)malloc(width * sizeof(int));
	}


	for (index_1 = 0; index_1 < height; index_1++)
	{
		for (index_2 = 0; index_2 < width; index_2++)
		{
			ptr[index_1][index_2] = 0;
		}
	}


	return (ptr);

}
