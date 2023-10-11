#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: input
 * Return: strlen
*/
int _strlen_recursion(char *s)
{
	int i;
	int j = 0;

	if (s[i] != '\0')
	{
		return (j);
	}
	else
		j++;
	_strlen_recursion(s, i + 1);
}
