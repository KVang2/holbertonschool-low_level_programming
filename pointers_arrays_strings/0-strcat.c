#include "main.h"
#include <string.h>
/**
 * char *_strcat - concatenates two strings
 * @dest: input 1
 * @src: input 2
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, dest_len;

	dest_len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';
	}
	return (dest);
}
