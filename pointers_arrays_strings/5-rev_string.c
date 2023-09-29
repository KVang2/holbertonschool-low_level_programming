#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string
 * Return: 0
*/
void print_rev(char *s)
{
	char tmp;
	int i, left, right, len;

	len = strlen(s);
	left = 0;
	right = len -1;

	for (i = left; i < right; i++)
	{
		tmp = s[i];
		s[i] =s[right];
		s[right] = temp;
		right--;
	}
	_putchar(s);
	_putchar('\n');
}
