#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: unsigned integer
 * Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list holder;

	va_start(holder, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
		return (0);
		}
		else
		{
			sum += va_arg(holder, const unsigned int);
		}
	}
	va_end(holder);
	return (sum);
}
