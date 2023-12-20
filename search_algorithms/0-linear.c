#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of int
 * @array: array of int
 * @size: size of array
 * @value: value of int
 * Return: 1st index
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("checking [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
}
