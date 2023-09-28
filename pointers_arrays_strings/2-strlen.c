#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: 0
*/
int _strlen(char *s)
{
	int l;

	for (l = 0; s[l]; l++)
	{
		if (s[l] != 0)
		{
			_putchar(*s);
		}
	_putchar('\n');
	}
return (0);
}
