#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elements
 *@size: size o each elemnt
 *Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, a;
	unsigned int *ptr;

	a = nmemb * size;
	if (a == 0)
	{
		return (NULL);
	}
	ptr = malloc(a);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= a; i++)
	{
		ptr[i] = 0;
	}
return (ptr);
}
