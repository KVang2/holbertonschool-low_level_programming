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

	printf(("Size of int: %lu byte(s)\n",sizeof(integerType));
	printf("Size of float: %lu byte(s)\n", sizeof(floatType));
	printf("Size of double: %lu byte(s)\n", sizeof(doubleType));
	printf("Size of char: %lu byte(s)\n", sizeof(charType));

	return (0);
}
