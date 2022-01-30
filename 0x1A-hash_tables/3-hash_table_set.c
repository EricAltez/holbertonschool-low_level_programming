#include "hash_tables.h"

/**
 *hash_table_set - adds elemento to ht
 *@ht: hash table to update
 *@key: key identifier
 *@value: value associated with key
 *Return: 1 if succeeded or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int kidx = 0, size = 0;
	hash_node_t *new_node;

	if (!ht || !key || !value)
		return (0);

	kidx = key_index((unsigned char *)key, size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[kidx];




return (1);
}
