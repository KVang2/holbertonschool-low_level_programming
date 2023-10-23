#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: spaces
 * Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, x, y;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
		x = 0;
	else
	{
		for (x = 0; s2[x] != '\0'; x++)
			;
	}
	if (x > n)
		x = n;
	s = malloc(sizeof(char) * (i + x + 1));
	if (s == NULL)
		return (NULL);
	for (y = 0; y < i; y++)
		s[y] = s1[y];
	for (y = 0; y < x; y++)
		s[y + i] = s2[y];
	s[i + x] = '\0';
	return (s);
}
