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
	int i, dest_len;

	dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
		src[i]++;
	}
return (dest);
}
