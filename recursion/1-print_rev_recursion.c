#include "main.h"
/**
 * _print_rev_recursion - printing a string in reverse
 * @s: input
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_print_rev_recursion(s + 1);
	}
	else
	{
	_print_rev_recursion(s);
	_putchar('\n');
	}
}
