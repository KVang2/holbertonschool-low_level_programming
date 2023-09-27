#include "main.h"
/**
 * print_numbers - number of 0 and 9
 *
 * Return: void
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		_putchar('\n');
	}
}
