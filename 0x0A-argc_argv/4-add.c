#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds positive numbers.
 *@argc: asd
 *@argv: asd
 *Return: 0 if ok - 1 if error
 */
int main(int argc, char *argv[])
{

	int i;
	int a;
	int sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a] != '\0'; a++)
		{
			if (!isdigit(argv[i][a]))
			{
			printf("Error\n");
			return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
