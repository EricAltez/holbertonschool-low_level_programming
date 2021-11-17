#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *sum_listint - return the sum of all data (n) of a list
 *@head: first node of given list
 *Return: sum of the elements
 */
int sum_listint(listint_t *head)
{
	int res = 0;

	if (!head)
		return (0);
	while (head)
	{
		res += head->n;
		head = head->next;
	}


return (res);
}
