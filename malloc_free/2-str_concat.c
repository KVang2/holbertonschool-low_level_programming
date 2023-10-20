#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: null
*/
char *str_concat(char *s1, char *s2)
{
	size_t l1, l2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = 0;
	while (s1[l1] != '\0')
	{
		l1++;
	}
	l2 = 0;
	while (s2[l2] != '\0')
	{
		l2++;
	}
	ptr = malloc(sizeof(char) * (l1 + l2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= l2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
