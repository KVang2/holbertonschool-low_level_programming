#include "main.h"
/**
 * get_bit - value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: value at index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
	{
		return (-1);
	}
	val = (n >> index) & 1;
	return (val);
}
