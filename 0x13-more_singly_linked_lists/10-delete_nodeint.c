#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *delete_nodeint_at_index - delete node at index
  *@head: node
  *@index: get the index
  *Return: 1 if succeed or -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int index_1 = index;
	int index_2 = 0;
	listint_t *node;
	listint_t *ptr = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index_1 == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}
	while (index_2 < index_1 - 1)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
		index_2++;
	}

	node = ptr->next;
	ptr->next = node->next;
	free(node);
	return (1);
}
