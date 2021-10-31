#include <stdio.h>
/**
 *main - prints combinations of 3 digits
 *Return: 0
 */
int main(void)
{
	int i = 0;
	int a = 0;
	int b = 0;

	for (i = 0; i <= 7; i++)
	{
		for (a = 0; a <= 8; a++)
		{
			for (b = 0; b <= 9; b++)
			{
				if (b > a && a > i)
				{
					putchar(i + '0');
					putchar(a + '0');
					putchar(b + '0');
					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
putchar(10);
return (0);
}
