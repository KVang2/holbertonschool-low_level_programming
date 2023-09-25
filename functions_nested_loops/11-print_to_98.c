#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing numbers
 * @n: numbers to print
 * Return: 0
*/
void print_to_98(int n)
{
	int m;

	if (n >= 0 && n <= 98 ; n++)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%d, ", m);
		}
		printf('\n');
	}
	else if (n < 0)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%d, ", m);
		}
		printf('\n');
	}
	else if (n > 98)
	{
		for (m = n ; m >= 98 ; m--)
		{
			printf("%d, ", m);
		}
		printf('\n');
	}
	else if (n == 98)
		printf("%d\n", n);
}
