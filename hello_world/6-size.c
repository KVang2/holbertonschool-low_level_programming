#include <stdio.h>
/**
 * main - Printing the size of various types
 *
 * Return: 0
 */
int main(void)
{
	char charType;
	int integerType;
	long int integerTypel;
	long long int integerTypell;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(intergerType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(integerTypel));
	printf("Size of a long int: %zu byte(s)\n", sizeof(integerTypell));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
