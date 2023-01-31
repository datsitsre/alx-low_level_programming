#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
  *reverse_listint - print reverse of a list
  *@head :head node
  *Return: reverse list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *node = NULL;

	while (*head)
	{
		node = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = node;
	}

	*head = ptr;

	return (*head);
}
