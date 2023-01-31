#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>


/**
  *pop_listint - delete a nod
  *@head: the head node
  *Return: 0 or 1
  */

int pop_listint(listint_t **head)
{
	listint_t **ptr;
	listint_t *ptr_1;
	int data;

	ptr = head;

	if (*head == NULL)
		return (0);


	ptr_1 = (*ptr)->next;
	data = (*ptr)->n;

	free(*ptr);
	*ptr = ptr_1;
	return (data);

}
