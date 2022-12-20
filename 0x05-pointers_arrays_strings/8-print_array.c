#include "main.h"
#include <stdio.h>

/**
  *print_array - print some functions
  *@a: variable a
  *@n: variable b
  */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == n - 1)
		{
			printf("%d", a[index]);
			break;
		}
		printf("%d, ", a[index]);
	}
	printf("\n");
}
