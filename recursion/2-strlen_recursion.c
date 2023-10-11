#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: input
 * Return: strlen
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
	i++;
	_strlen_recursion(s + 1);
	}
return (i);
}
