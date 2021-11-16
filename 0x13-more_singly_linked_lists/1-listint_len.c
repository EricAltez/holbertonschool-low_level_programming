#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *listint_len - return the number of elements in a lidtint_t list
 *@h: poinjter to list
 *Return: number of elements on the list
 */
size_t listint_len(const listint_t *h)
{
size_t c = 0;

	if (!h)
		return (0);
	while (h)
	{
		c++;
		h = h->next;
	}
return (c);
}
