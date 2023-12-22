#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key you are looking for
 *
 * Return: element or NULL if it fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int my_index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	my_index = key_index((unsigned char *)key, ht->size);

	node = ht->array[my_index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
