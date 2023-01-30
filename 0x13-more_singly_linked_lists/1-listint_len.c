#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
  *listint_len - print the int part of the list
  *@h: the head pointer;
  *Return: n or null
  */

size_t listint_len(const listint_t *h)
{
	size_t index;

	for (index = 0; h ; h = h->next)
	{
		index++;
	}
	return (index);
}
