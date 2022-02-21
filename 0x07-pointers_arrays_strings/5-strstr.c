#include "main.h"
#include <stdio.h>
/**
 *_strstr - asdasd
 *@haystack: asd
 *@needle: asd
 *Return: asd
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0;
	
	if (needle[j] == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != 0)
	{
		k = i;
		j = 0;
		if (haystack[k] == needle[j])
		{
			while (needle[j] == haystack[k])
			{
				j++;
				k++;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
return (NULL);
}
