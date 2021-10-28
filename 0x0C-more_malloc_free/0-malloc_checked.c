#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: amount of memory to be allocated
 *Return: pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
