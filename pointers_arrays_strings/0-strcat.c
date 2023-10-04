#include "main.h"
/**
 * char *_strcat - concatenates two strings
 * @dest: input 1
 * @src: input 2
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; dest[j] != '\0'; j++)
		{
			dest[j] = src[i];
			j++;
		}
		dest[j] = '\0';
	}
	return (dest);
}
