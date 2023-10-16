#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: number
 * @argv: array
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", (x * y));
	return (0);
}
