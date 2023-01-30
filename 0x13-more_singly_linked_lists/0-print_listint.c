#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
  *print_listint - print the int part of the list
  *h: the head pointer;
  *Return: n or null
  */
size_t print_listint(const listint_t *h)
{
	size_t index;
	if (h == NULL)
		return(0);
	for (index = 0; h;h =  h->next)
	{
		printf("%d\n",h->n);
		index++;
	}

	return (index);
}
