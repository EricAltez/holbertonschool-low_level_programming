#include "main.h"
/**
 *string_toupper - change lowercase leters to uppercase
 *@string: string to be uppercased
 *Return: uppercased string
 */
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
	if (string[i] < 122 && string[i] > 97)
	{
		string[i] = string[i] - 32;
	}
	}
return (string);
}
