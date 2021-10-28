#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *string_nconcat - concatenates 2 strings
 *@s1: string 1
 *@s2: string 2
 *@n: max bytes of s2
 *Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, a, b, c;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; i < n; i++)
	{
		;
	}
	b = i;
	for (i = 0; s1[i] != 0; i++)
	{
		;
	}
	a = i;
	a += b;
	ptr = malloc(sizeof(char) * a);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != 0; i++)
	{
		ptr[i] = s1[i];
	}
	c = i;
	for (i = 0; i <= n; i++)
	{
		ptr[c] = s2[i];
		c++;
	}
return (ptr);
}
