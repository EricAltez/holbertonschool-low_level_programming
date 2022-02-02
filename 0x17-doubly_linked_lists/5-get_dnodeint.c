#include "lists.h"

/**
 *dlistint_t *get_dnodeint_at_index - finds certain node
 *@head: pointer to first node
 *@index: node identifier
 *Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned long int count = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
