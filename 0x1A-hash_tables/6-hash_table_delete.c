#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes hash tables
 * @ht: hash table
 *
 * Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *node1;
	hash_node_t *node2;

	if (ht == NULL)
		return;

	for (a = 0; a < ht->size; a++)
	{
		node1 = ht->array[a];
		while ((node2 = node1) != NULL)
		{
			node1 = node1->next;
			free(node2->key);
			free(node2->value);
			free(node2);
		}
	}
	free(ht->array);
	free(ht);
}
