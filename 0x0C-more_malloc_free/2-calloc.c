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

	a = (nmemb * sizeof(unsigned int) * size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; ptr[i] != 0; i++)
	{
		ptr = malloc(a);
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
return (ptr);
}
