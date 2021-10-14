#include "main.h"
/**
 *rev_string - reverse a string
 *@s: string to reverse
 */
void rev_string(char *s)
{
	int i;
	int a = 0;
	int b = 0;
	char aux;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (a = i - 1; a >= i / 2; a--)
	{
		aux = s[a];
		s[a] = s[b];
		s[b] = aux;
		b++;
	}
}
