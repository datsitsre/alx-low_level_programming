#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>


/**
  *free_listint - free
  *@head: the head
  *Return: void
  */
void free_listint(listint_t *head)
{

	listint_t *ptr, *ptr_2;

	ptr = head;
	while (ptr != NULL)
	{
		ptr_2 = ptr->next;
		free(ptr);
		ptr = ptr_2;
	}
}
