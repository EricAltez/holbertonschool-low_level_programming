#include "lists.h"

/**
 *sum_dlistint - sums all nodes data
 *@head: pointer to first node
 *Return: 0 or 1
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	if (!head)
		return (0);

	res = head->n;

	while (head->next != NULL)
	{
		head = head->next;
		res += head->n;
	}
	return (res);
}
