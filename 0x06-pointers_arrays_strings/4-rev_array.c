#include "main.h"
#include <stdio.h> 

/**
  *reverse_array - reverse an array
  *@: array values
  *@n: the number of array
  */
void reverse_array(int *a, int n)
{
	int len = n;
	int index;

	for (index = len; index >= 0; index--)
	{
		printf("%d", a[index]);
		if (index != 0)
			printf(", ");
	}
	printf("\n");

}

