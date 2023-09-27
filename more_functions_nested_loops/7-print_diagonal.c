#include "main.h"
/**
 * print_diagonal - printing //
 *
 * @n: numbers to print
 *
 * Return: 0
*/
void print_diagonal(int n)
{
	int s, i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
			{
			_putchar(32);
			_putchar(92);
			_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
