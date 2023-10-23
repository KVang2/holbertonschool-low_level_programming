#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocaes memory using malloc
 * @b: unsigned int
 * Return: 0
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
