#include "main.h"
/**
 *
 * print_alphabet_x10 - printing alphabet x10
 *
 * Return: 0
*/
void print_alphabet_x10(void)
{
	int x = 0 , y;

	for (x < 10)
	{
		y = 0;
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
	}
	_putchar('\n')
	x++;
}
