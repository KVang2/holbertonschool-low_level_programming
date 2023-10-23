#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: 0
*/
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
