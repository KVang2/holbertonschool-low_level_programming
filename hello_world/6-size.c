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

	printf("Size of a int: %zu byte(s)\n",sizeof(integerType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	printf("Size of a double: %zu byte(s)\n", sizeof(doubleType));
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));

	return (0);
}
