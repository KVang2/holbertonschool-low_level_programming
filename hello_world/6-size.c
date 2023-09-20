#include <stdio.h>
/**
 * main - Printing the size of various types
 *
 * Return: 0
 */
int main(void)
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;

	printf(("Size of int: %1d bytes\n", sizeof(integerType));
	printf("Size of float: %1d bytes\n", sizeof(floatType));
	printf("Size of double: %1d bytes\n", sizeof(doubleType));
	printf("Size of char: %1d byte\n", sizeof(charType));

	return (0);
}
