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

		printf("Searching for array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
