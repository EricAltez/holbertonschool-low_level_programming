#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *@str: string to be capitalized
 *Return: capitalized string
 */
char *cap_string(char *str)
{
char p[] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int i = 1;
int a = 0;

	if (str[0] <= 122 && str[0] >= 97)
	{
		str[0] = str[0] - 32;
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		for (a = 0; p[a] != '\0'; a++)
		{
			if ((str[i] == p[a]) && (str[i + 1] >= 97) && (str[i + 1] <= 122))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
return (str);
}
