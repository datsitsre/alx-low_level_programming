#include "main.h"
#include <stdio.h>

/**
  *reverse_array - reverse an array
  *@a: array values
  *@n: the number of array
  */
void reverse_array(int *a, int n)
{
	int index;

	for (index = n-1; index >= 0; index--)
	{
		printf("%d", a[index]);
		if (index != 0)
			printf(", ");
	}
	printf("\n");

}

