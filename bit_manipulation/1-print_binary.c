#include "main.h"
/**
 * print_binary - printing binary representation of a num
 * @n: unsigned long int
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
	{
		print_binary(n >> 1, i - 1);
		putchar((n & 1) ? '1' : '0');
	}
}
