#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - executes function as a parameter on each array element
 *@array: given array
 *@size: size of the array
 *@action: function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
