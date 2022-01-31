#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *@ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0, size = 0;
	hash_node_t *tmp = NULL, *aux = NULL;

	if (!ht)
		return;

	size = ht->size;

	for (i = 0; i < size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			free(tmp->value);
			free(tmp->key);
			aux = tmp;
			tmp = tmp->next;
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
