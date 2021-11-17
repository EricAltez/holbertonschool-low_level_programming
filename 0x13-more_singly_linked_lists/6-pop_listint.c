#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *pop_listint - deletes the head node, return its data
 *@head: pointer to first node
 *Return: head data
 */
int pop_listint(listint_t **head)
{
	int aux = 0;
	listint_t *temp;

	if (!head)
		return (0);
	aux = (*head)->n;
	temp = *head;
	*head = temp->next;
	free(temp);
return (aux);
}
