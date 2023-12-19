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

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Checking array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found at index: %ld\n", i);
			return (i);
		}
	}
	return (-1);
}
