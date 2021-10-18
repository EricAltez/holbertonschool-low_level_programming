#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: src string
 *@c: character to locate
 *Return: pointer to character found or null
 */
char *_strchr(char *s, char c)
{
int i = 0;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	{
	}

return (&s[i]);
}
