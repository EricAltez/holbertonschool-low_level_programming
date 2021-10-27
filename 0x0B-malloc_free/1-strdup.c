#include "main.h"
#include <stdlib.h>
/**
 *_strdup - copy a string and return a pointer to it
 *@str: string to copy
 *Return: pointer to copied string or NULL
 */
char *_strdup(char *str)
{
	char *str2;
	int i;
	int a = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		a++;
	}

	str2 = malloc(a);

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		str2[i] = str[i];
	}

return (str2);
}
