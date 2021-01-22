#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size:  size of the array
 * Return: a pointer to the newly created hash table
 *         NULL if fuction fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
	{
		return (NULL);
	}

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}

	while (i < size)
	{
		h_table->array[i] = NULL;
		i++;
	}
	return (h_table);
}
