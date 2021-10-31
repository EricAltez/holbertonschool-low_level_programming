#include <stdio.h>
/**
 *main - prints two digits combinations
 *Return: 0
 */
int main(void)
{
	int i = 0;
	int a = 0;

	for (i = 0; i <= 8; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			if (i < a)
			{
				putchar(i + '0');
				putchar(a + '0');
				if (i != 8 || a != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar (10);
	return (0);
}
