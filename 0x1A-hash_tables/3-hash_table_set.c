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
	unsigned long int k = 0;
	hash_node_t *new;

	/*check values existence*/
	if (!ht || !key || !value)
		return (0);
	/*get key index*/
	k = key_index((unsigned char *)key, ht->size);

	/*check if index is empty*/
	if (ht->array[k] && strcmp(key, ht->array[k]->key) == 0)
	{
		free(ht->array[k]->value);
		ht->array[k]->value = strdup(value);
		return (1);
	}
	/* if index is not empty */
	/*allocate memory for new node */
	new = malloc(sizeof(hash_node_t));
	/* check correct allocation */
	if (!new)
		return (0);
	/* append new node */
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[k];
	ht->array[k] = new;
	return (1);
}
