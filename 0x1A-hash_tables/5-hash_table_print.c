#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 *
 * Return: hash table or nothing if NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *node;
	char *separator;

	if (ht == NULL)
		return;

	printf("{");
	separator = "";

	for (a = 0; a < ht->size; a++)
	{
		node = ht->array[a];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", separator, node->key, node->value);
			separator = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
