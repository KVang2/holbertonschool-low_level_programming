#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - array of chars
 * @size: size of char
 * @c: specific char
 * Return: 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
