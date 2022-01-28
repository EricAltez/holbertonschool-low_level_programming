#include "hash_tables.h"

/**
 *hash_table_create - creates hash table
 *@size: size of the array
 *Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_h_table = NULL;
	unsigned long int i = 0;

	new_h_table = malloc(sizeof(new_h_table));
	if (!new_h_table)
		return (NULL);

	new_h_table->size = size;
	new_h_table->array = malloc(size * sizeof(hash_node_t *));
	if (!new_h_table->array)
	{
		free(new_h_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_h_table->array[i] = NULL;

return (new_h_table);
}
