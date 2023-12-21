#include "search_algos.h"
/**
 * binary_search - searches for value in sorted array of int
 * @array: array of int
 * @size: size of array
 * @value: value of array
 * Return: return 1 or -1
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i;

	while (left <= right)
	{
	mid = left + (right - left) / 2;

		printf("Searching for array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			left = mid + 1;
		}
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid -1;
		}
	}
	return (-1);
}
