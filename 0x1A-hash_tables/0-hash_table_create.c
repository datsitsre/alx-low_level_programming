#include <stdio.h>
#include "hash_tables.h"


/**
   * hash_table_create - create a hash table
   *@size: the size of the array
   *Return: return pointer
   */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table * table_hash
unsigned long int countNumber;

	table_hash = malloc(sizeof(hash_table_t));

	if (table_hash == NULL)
	{
		return (NULL);
	}
	table_hash->size = size;

	table_hash->array = malloc(size * sizeof(hash_node_t))

	if (table_hash->array == NULL)
	{
		free(table_hash);
		return (NULL);
	}

	for (countNumber = 0; countNumber < table_hash; countNumber)
	{
		table_hash[i] = NULL;
	}

	return (table_hash);

}
