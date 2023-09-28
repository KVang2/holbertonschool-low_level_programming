#include "main.h"
/**
 * print_triangle - printing a triangle
 *
 * @size: amount of triangles
 *
 * Return: 0
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int h, w;

		for (h = 1; h <= size; h++)
		{
			for (w = h; w < size; w++)
			{
				_putchar(' ');
			}
			for (w = 1; w <= h; w++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
