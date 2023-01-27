#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_node - add a note a begining
  *@head: head of the node
  *@str: string
  *Return:0
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
