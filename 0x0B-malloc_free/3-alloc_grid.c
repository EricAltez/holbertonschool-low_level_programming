#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: 2d array width
 *@height: 2d array height
 *Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * width);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= width; i++)
	{
		p[i] = malloc(sizeof(int) * height);
	}

return (p);
}
