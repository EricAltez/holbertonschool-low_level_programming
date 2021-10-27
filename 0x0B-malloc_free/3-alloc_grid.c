#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: 2d array width
 *@height: 2d array height
 *Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int a = 0;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == 0)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (a = 0; a < width; a++)
		{
			p[i][a] = 0;
		}
	}

return (p);
}
