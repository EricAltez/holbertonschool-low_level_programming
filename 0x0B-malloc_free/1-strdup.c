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
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '0')
	{
		i++;
	}
	i += 1;
	str2 = malloc(sizeof(char) * i);
	for (i = 0; str[i] != '0'; i++)
	{
		str2[i] = str[i];
	}
	if (str2 == NULL)
	{
		return (NULL);
	}
return (str2);
}
