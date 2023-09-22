#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet x10
 *
 * Return: 0
*/
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
	_putchar('\n');
	}
}
