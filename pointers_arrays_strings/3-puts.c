#include "main.h"
/**
 * _puts - printing a string
 *
 * @str: string printing
 *
 * Return: 0
*/
void _puts(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
