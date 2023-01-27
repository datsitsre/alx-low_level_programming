#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_node_end - add a note a begining
  *@head: head of the node
  *@str: string
  *Return:0
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp;

	ptr = *head;
	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;


	return (temp);
}
