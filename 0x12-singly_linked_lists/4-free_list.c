#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  *free_list - add a note a begining
  *@head: head of the node
  *Return:0
  */
void free_list(list_t *head)
{
	unsigned int index;

	for (index = 0; head; head = head->next)
	{
		free(head->str);
		free(head);
		index++;
	}
}
