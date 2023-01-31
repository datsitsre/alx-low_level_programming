#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
  *free_listint2 - free the head
  *@head: the head pointer;
  *Return: n or null
  */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *ptr_1;

	ptr = *head;

	if (ptr == NULL)
		return;

	while (ptr != NULL)
	{
		ptr_1 = ptr->next;
		free(ptr);
		ptr = ptr_1;
	}
	*head = NULL;
}
