#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to new string that duplicate
 * @str: string
 * Return: 0
*/
char *_strdup(char *str)
{
	char *a;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		a[j] = str[j];
	return (a);
}
