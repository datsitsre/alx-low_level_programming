#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
  *insert_nodeint_at_index - insert inside a position
  *@head: the head node
  *@idx: position to insert
  *@n: what to insert
  *Return: 0 or pointer
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t **ptr;
	listint_t *ptr_1 = malloc(sizeof(listint_t));
	int count = 0;
	int num = idx;


	ptr = head;
	ptr_1->n = n;
	ptr_1->next = NULL;

	if (!*ptr)
		return (NULL);
	if (!ptr_1)
		return (NULL);

	if (num == 0)
	{
		ptr_1->next = *ptr;
		*ptr = ptr_1;
		return (ptr_1);
	}

	while (*ptr && count < num)
	{
		if (count == num - 1)
		{
			ptr_1->next = (*ptr)->next;
			(*ptr)->next = ptr_1;
			return (ptr_1);
		}
		else
			(*ptr) = (*ptr)->next;

	count++;
	}

	return (NULL);

}
