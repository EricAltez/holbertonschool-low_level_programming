#include "main.h"
/**
 *set_string -  sets the value of a pointer to a char
 *@to: pointer
 *@s: pointer to pointer
 */
void set_string(char **s, char *to)
{
	*s = to;

}