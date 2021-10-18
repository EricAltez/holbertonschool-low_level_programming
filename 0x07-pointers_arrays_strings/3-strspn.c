#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: string
 *@accept: chaaracters to look
 *Return: number of found characters
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int a = 0;
unsigned int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				c++;
				break;
			}
		}
		if (a == '\0' && c != 0)
		{
		break;
		}
	}
return (c);
}
