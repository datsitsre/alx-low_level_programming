#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
  *list_len - list the number of elements
  *@h: head points
  *Return: 0
  */
size_t list_len(const list_t *h)
{
	size_t index;

	for (index = 0; h; h = h->next)
	{
		index++;
	}
	return (index);
}
