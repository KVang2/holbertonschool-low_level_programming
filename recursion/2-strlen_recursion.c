#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: input
 * Return: strlen
*/
int _strlen_recursion(char *s)
{
	int i;

	if (s[i] != '\0')
	{
	_strlen_recursion(s[i] + 1);
	_putchar (s);
	}
return (0);
}
