#include "lists.h"
#include <stdio.h>
#include <stdlib.h>



/**
  *add_nodeint - add a node
  *@h: the head pointer;
  *@n: the node
  *Return: n or null
  */

listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = *h;
	*h = ptr;

	return (*h);

}

