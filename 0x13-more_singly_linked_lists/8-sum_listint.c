#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
  *sum_listint - return the nth node
  *@head: head node
  *Return: sum
  */
int sum_listint(listint_t *head)
{

	int sum = 0;
	listint_t *ptr;

	ptr = head;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum +=  ptr->n;
		ptr = ptr->next;
	}

	return (sum);


}
