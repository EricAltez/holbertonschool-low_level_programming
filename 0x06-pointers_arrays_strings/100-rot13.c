#include "main.h"
/**
 *rot13 - encondes using rot13
 *@str: string to be encoded
 *Return: str - encoded string
 */
char *rot13(char *str)
{
char alp[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char alp13[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
int a = 0;
int b = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; alp[b] != '\0'; b++)
		{
			if (str[a] == alp[b])
			{
				str[a] = alp13[b];
				break;
			}
		}
	}
return (str);
}
