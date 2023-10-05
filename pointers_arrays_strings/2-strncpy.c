#include "main.h"
#include <string.h>
/**
 * char *_strncpy - copies a string
 * @dest: input 2
 * @src: input 1
 * @n: int
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
