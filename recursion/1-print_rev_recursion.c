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
	putchar(*s);
	print_rev_recursion(s - 1);
	}
	_putchar('\n');
}
