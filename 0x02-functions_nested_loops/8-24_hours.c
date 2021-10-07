#include "main.h"

/**
 *jack_bauer -  prints 24 hs:
 *
 *
 */




void jack_bauer(void)
{

int a = 48;
int A = 48;
int b = 48;
int B = 48;

	for (a = 48; a <= 50; a++)
	{
		for (A = 48; A <= 57; A++)
		{
			for (b = 48; b <= 53; b++)
			{
				for (B = 48; B <= 57; B++)
				{
				if (a == 50 && A > 51)
				{
					break;
				}
				else
				{
				_putchar (a);
				_putchar (A);
				_putchar (58);
				_putchar (b);
				_putchar (B);
				_putchar (10);
				}
				}
			}
		}
	}
}
