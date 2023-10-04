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
		dest[dest_len] = src[i];
		dest_len++;
	}
	return (dest);
}
