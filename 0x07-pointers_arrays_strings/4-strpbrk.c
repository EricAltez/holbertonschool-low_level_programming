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
char *p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				*p = s[i];
				if (p != 0)
				{
					break;
				}
			}
			if (p != 0)
			{
				break;
			}
		}
	if (p != 0)
	{
		break;
	}
	}
return (p);
}
