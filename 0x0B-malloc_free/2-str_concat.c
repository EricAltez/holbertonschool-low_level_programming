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
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	char *ptr;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	a = i;
	for (i = 0; s2[i] != '\0'; i++)
	{
		;
	}
	b = i;
	c = a + b;
	c += 1;
	ptr = malloc(sizeof(char) * c);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	c = i;
	for (i = 0; s2[i] != '\0'; i++)
	{
		ptr[c] = s2[i];
		c++;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
return (ptr);
}
