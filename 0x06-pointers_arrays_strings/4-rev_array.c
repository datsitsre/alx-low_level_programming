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
	int temp;

	for (index = 0; index < (n / 2); index++)
	{
		temp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = temp;
	}

	index = 0;
	while (index < n)
	{
		if (index != 0)
			printf(", ");
		printf("%d", a[index]);
		index++;
	}
	printf("\n");
}
