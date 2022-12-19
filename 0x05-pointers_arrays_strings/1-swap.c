#include "main.h"

/**
  *swap_int - swap two integer
  *@a: first integer
  *@b: second inteGER
  */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

