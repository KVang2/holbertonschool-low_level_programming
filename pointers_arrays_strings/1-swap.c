#include "main.h"
/**
 * swap_int - swap values of two integers
 * @a: var1
 * @b: var2
 * Return: void
*/
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
