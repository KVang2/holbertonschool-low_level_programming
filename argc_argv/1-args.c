#include <stdio.h>
/**
 * main - print numbers of arguments passed into
 * @argc: numbers
 * @argv: array
 * Return: 0
*/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
