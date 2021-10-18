#include "main.h"
/**
 *_memset - fills the first n bytes pointed by s with b
 *@s: pointer to memory area
 *@b: constant byte
 *@n: number of bytes
 *Return: s - charged memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
