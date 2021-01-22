#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *next;
	unsigned long int i;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				next = current->next;
				if (current->value != NULL)
					free(current->value);
				if (current->key != NULL)
					free(current->key);
				free(current);
				current = next;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
