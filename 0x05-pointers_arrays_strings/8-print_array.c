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
		printf("%d, ", a[index]);
	}
	printf("\n");
}
