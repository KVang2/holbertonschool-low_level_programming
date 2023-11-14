#include "main.h"
/**
 * flip_bits - returns number of bits you need to flip
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: numbers of flip bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flip = 0;
	unsigned long int two;

	two = n ^ m;

	while (two)
	{
		flip += two & 1;
		two >>= 1;
	}
	return (flip);
}
