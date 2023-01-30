#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
  *add_nodeint_end - add end
  *@head: the head pointer;
  *@n: the node
  *Return: n or null
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;


	ptr = *head;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}


	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = temp;

	return (temp);


}
