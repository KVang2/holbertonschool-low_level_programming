#include "main.h"
/**
 * char *_memcpy - copies memory area.
 * @dest: memory 1
 * @src: memory 2
 * @n: bytes
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
