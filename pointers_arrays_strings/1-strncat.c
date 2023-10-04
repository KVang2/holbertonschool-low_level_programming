#include "main.h"
#include <string.h>
/**
 * char *_strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: bytes
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	l = 0
	while (l < n && src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
return (dest);
}
