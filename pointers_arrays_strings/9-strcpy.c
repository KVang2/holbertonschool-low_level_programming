#include "main.h"
/**
 * char *_strcpy - copies string from src to dest
 * @dest: copies string to
 * @src: copies string from
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int d, s;

	for (d = 0; d < s && src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}
	for ( ; d < s; d++)
	{
		dest[d] = '\0';
	}
	return (dest);
}
