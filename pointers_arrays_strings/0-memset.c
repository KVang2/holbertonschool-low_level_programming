#include "main.h"
/**
 * char *_memset - filling memory with a constant byte
 * @s: value
 * @b: constant byte
 * @n: bytes
 * Return: 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
