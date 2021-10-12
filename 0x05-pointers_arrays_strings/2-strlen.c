#include "main.h"

/**
 *_strlen - return size of string
 *@s: string
 *Return: a
 */

int _strlen(char *s)
{
	int i;
	int a = 0;

	for (i = 0; s[i] != 0; i++)
	{
		a++;
	}
return (a);
}
