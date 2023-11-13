#include "main.h"
/**
 * set_bit - setting value of a bit to 1
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
