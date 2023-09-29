#include "main.h"
#include <string.h>
/**
 * puts_half - half of a string
 * @str: input
 * Return: 0
*/
void puts_half(char *str)
{
	int i, l1, l2;

	l1 = strlen(str);
	l2 = (l1 / 2);

	if (l1 % 2 != 0)
	{
		l2 = ((l1 + 2) / 2);
	}
	for (i = l2; i < l1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
