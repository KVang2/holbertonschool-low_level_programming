#include "main.h"
/**
 * reverse_array - reverse an array of integers
 * @a: integer 1
 * @n: integer 2
 * Return: 0
*/
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
	t = a[i];
	a[i] = a[n];
	a[n] = t;
	}
}
