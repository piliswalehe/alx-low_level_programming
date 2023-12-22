#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 *
 * Return: hash table or a NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	hash_node_t **array;
	unsigned long int a;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = NULL;

	newtable->array = array;
	newtable->size = size;

	return (newtable);
}
