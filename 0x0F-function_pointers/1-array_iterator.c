#include  "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
  *array_iterator - print an array
  *@array: the array itself
  *@size: size of array 
  *@action: function
  *Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int index = 0;
	if (action == NULL || array == NULL)
		return;



	while(array[index] < (int) size)
	{
		action(array[index]);
		index++;
	}
}
