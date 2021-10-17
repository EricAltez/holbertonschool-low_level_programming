#include "main.h"
/**
 *leet - encode string
 *@str: string to encode
 *Return: str - encoded string
 */
char *leet(char *str)
{
char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int i = 0;
int a = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			if (str[i] == let[a])
			{
				str[i] = num[a];
			}
		}
	}
return (str);
}
