#include "main.h"
/**
 *_strcat - conatenate 2 strings
 *@dest: concatenated strings
 *@src: string to concatenate
 *Return: pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	a += 1;
	dest[a] = '\0';
	return (dest);
}
