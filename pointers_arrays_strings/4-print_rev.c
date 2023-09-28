#include "main.h"
/**
 * print_rev - reverse string
 *
 * @s: string
 *
 * Return: 0
*/
void print_rev(char *s)
{
	int i, r;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}

	r = i - 1;

	for (i = r; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
