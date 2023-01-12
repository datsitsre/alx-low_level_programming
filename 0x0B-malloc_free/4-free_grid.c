#include "main.h"
#include <stdlib.h>

/**
  *free_grid - frees a 2 dimensionsional grid previously
  *@grid: CREATE TABLE
  *@height: the columns
  *Return: pointer
  */
void free_grid(int **grid, int height)
{
	int index_1; 
	for (index_1 = 0; index_1 < height;index_1++)
	{
		free(grid[index_1]);
	}
	free(grid);

}
