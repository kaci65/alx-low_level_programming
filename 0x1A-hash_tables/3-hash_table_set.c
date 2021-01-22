#include "hash_tables.h"
#include <stddef.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key. Cannot be an empty string
 * @value: value associated with the key. Must be duplicated
 *         Can be an empty string
 * Return: 1 if it succeeds
 *         Otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *tmp;
	unsigned long int index;

	if (value == NULL || ht == NULL || key == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);

	if (node->value == NULL || node->key == NULL)
	{
		free(node);
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
