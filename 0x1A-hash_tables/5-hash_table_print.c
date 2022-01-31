#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table
 *@ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux;
	char *sep = "";

	if (!ht)
		return;

	printf("{");

	while (i < ht->size)
	{
		aux = ht->array[i];
		while (aux)
		{
			printf("%s'%s': '%s'", sep, aux->key, aux->value);
			sep = ", ";
			aux = aux->next;
		}
		i++;
	}
	printf("}\n");
}
