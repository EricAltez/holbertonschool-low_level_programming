#include "main.h"

/**
 *swap_int - swaps the values of two integer
 *@a: first int
 *@b: second int
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *b - *a;
*a = *a - *b;
}
