#include "main.h"
/**
 *_strcmp - compare strings
 *@s1: first string
 *@s2: second string
 *Return: 0 if equal, positive int if s1 > s2, negative int if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		res = s1[i] - s2[i];
		if (res != 0)
		{
		break;
		}
	}
return (res);
}
