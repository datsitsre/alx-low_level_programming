#include "hash_tables.h"


/**
  *hash_table_delete - delete hash table
  *@ht: the hash table
  *Return: Nothing
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int countNumber = 0;
	hash_node_t *hash_table;

	if (ht == NULL)
		return;

	for (countNumber = 0; countNumber->size; countNumber++)
	{
		while (ht->array[countNumber] != NULL)
		{

			hash_table = ht->array[countNumber]->next;
			free(ht->array[countNumber]->key);
			free(ht->array[countNumber]->value);
			free(ht->array[countNumber]);
			ht->array[countNumber] = hash_table;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
