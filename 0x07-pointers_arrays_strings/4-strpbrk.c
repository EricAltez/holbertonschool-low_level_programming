#include "main.h"
/**
 *_strpbrk - search a string for any of a set of bytes
 *@s: string to serach on
 *@accept: set o chars
 *Return: pointer to de byte of match or null
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int a = 0;
int b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				b++;
				break;
			}
		}
		if (b != 0)
		{
			break;
		}
	}
	if (s[i] == '\0')
	{
		return ('\0');
	}
	else
	{
		return (&s[i]);
	}
}
