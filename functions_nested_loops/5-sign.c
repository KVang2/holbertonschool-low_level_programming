#include "main.h"
/**
 * print_sign - prints sign of a number
 *
 * @n: if n is greater, equal to or less than zero
 *
 * Return: 1, 0, or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
}
