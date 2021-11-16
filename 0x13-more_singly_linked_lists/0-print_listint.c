#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint - prints all the elements of a listint_t list
 *@h: pointer to list
 *Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		c++;
	}
return (c);
}
