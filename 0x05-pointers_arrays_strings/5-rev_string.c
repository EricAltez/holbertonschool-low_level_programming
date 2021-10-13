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
	char aux1;
	char aux2;

	for (i = 0; s[i] != 0; i++)
	{
	a++;
	}
	for (a = a - 1; a >= 0; a--)
	{
		aux1 = s[a];
		aux2 = s[b];
		s[a] = aux2;
		s[b] = aux1;
		b++;
	}

}
