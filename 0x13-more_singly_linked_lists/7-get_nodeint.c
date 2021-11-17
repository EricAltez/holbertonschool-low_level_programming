#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *get_nodeint_at_index - locate and return a n node
 *@head: pointer to first node
 *@index: wanted node index
 *Return: n node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

if (!head)
	return (0);
for (i = 0; i < index; i++)
{
	head = head->next;
}
if (head == NULL)
	return (NULL);
return (head);
}
