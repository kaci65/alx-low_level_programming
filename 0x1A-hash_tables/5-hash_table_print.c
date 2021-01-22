#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *sep = "";
	unsigned int elems = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			elems++;
		}
	}
	if (elems > 0)
	{
		printf("{");
	}
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s", sep);
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			sep = ", ";
		}
	}

	if (elems > 0)
	{
		printf("}");
	}
	printf("\n");
}
