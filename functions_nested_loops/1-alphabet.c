#include "main.h"
#include <stdio.h>
/**
 * main - printing alphabet, in lowercase
 *
 * @x print
 * Return: 0
 *
*/
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++);
	{
		_putchar(x);
	}
	_putchar('\n');

	return (0);
}
