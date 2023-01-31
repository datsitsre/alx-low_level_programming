#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
  *get_nodeint_at_index - return the nth node
  *@head: head node
  *@index: index nth
  *Return: 0 or nth
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	int count = 0;
	int num = index;


	ptr = head;

	if (ptr == NULL)
		return (NULL);

	while (ptr != NULL)
	{
		if (count == num)
			break;
		ptr = ptr->next;
		count++;
	}

	return (ptr);
}
