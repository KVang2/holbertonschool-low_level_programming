#include "main.h"
/**
 * print_numbers - number of 0 and 9
 *
 * Return: void
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i + '0');
		_putchar('\n');
	}
}
