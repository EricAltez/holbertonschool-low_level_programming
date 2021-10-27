#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatenates two strings - malloc
 *@s1: first tring to concatenate
 *@s2: second string to concatenate
 *Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, a, b, c;
	char *ptr;

	for (i = 0; s1 != 0; i++)
	{
	}
	a = i;
	for (i = 0; s2 != 0; i++)
	{
	}
	b = i;
	ptr = malloc(a + b + 1);
	for (i = 0; s1[i] != 0; i++)
	{
		ptr[i] = s1[i];
	}
	c = i;
	for (i = 0; s2[i] != 0; i++)
	{
		c++;
		ptr[c] = s2[c];
	}
return (ptr);
}
