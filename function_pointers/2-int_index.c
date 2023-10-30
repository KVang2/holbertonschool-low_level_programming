#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searching for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to the function
 * Return: index of first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
