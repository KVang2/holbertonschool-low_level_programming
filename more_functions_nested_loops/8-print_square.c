#include "main.h"
/**
 * print_square - sunshine in square inch
 *
 * @size: squares
 *
 * Return: 0
*/
void print_square(int size)
{
	int h, w;

	if (size > 0)
	{
		for (w = 0; w < size; w++)
		{
		_putchar(35);
		_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
