#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_listint_safe - prints a linked lis
 * @head: head ptr 
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	long int munx;
	size_t number = 0;

	while (head)
	{
		munx = head - head->next;
		number++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (munx > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (number);
}
