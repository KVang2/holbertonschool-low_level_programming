#include "search_algos_h"
/**
 * linear_search - searches for a value in an array of int
 * @array: array of int
 * @size: size of array
 * @value: value of int
 * Return: 1st index
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("Checking %d with %d\n", array[i], value);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
