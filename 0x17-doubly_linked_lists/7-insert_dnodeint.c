#include "lists.h"

/**
 *dlistint_t *insert_dnodeint_at_index - inserts node at a given position.
 *@h: pointer to first node
 *@idx: index
 *@n: new node data
 *Return: address of the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *auxn = *h;

	if (!new_node)
		return (NULL);

	if (!h)
		return (NULL);

	while (i < (idx - 1))
	{
		auxn = auxn->next;
		i++;
	}
	new_node->n = n;
	new_node->prev = auxn;
	new_node->next = auxn->next;
	auxn->next = new_node;

return (new_node);
}
