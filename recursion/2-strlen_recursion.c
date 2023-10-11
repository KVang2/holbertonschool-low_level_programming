#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: input
 * Return: strlen
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	_strlen_recursion(s + 1);
	}
return (0);
}
