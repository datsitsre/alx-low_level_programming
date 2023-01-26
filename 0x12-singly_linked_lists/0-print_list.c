#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
  *print_list - print all element
  *@h: the head
  *Return: size_t
  */
size_t print_list(const list_t *h)
{
	size_t index;

	if (h->str == NULL)
		printf("[0] (nill)\n");
	else
	{
		for (index = 0; h != NULL; h = h->next)
		{
			printf("[%u] %s\n", h->len, h->str);
			index++;
		}
	}
	return (index);
}
