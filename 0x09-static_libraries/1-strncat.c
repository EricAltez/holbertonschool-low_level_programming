#include "main.h"
/**
 *_strncat - concatenate 2 strings, not null terminated
 *@dest: concatenated strings
 *@src: string to be concatenated
 *@n: max bytes of src to be used
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
