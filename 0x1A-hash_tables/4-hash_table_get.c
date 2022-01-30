#include "hash_tables.h"

/**
 *hash_table_get - get value associated with a key
 *@ht: hash table to look into
 *@key: key to look for
 *Return: value or NULL if not key found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int kidx = 0;
	hash_node_t *aux;

	if (!ht || !key)
		return (NULL);

	kidx = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[kidx];

	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
			return (ht->array[kidx]->value);
		aux = aux->next;
	}
return (NULL);
}
