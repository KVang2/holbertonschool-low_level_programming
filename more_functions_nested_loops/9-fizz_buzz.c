#include "stdio.h"
/**
 * main - fizzbuzzer
 *
 * Return: 0
*/
int main(void)
{
	int x;

	for (x = 1; x <= 99; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d",x);
			printf(" ");
		}
	}
	printf("Buzz");
	putchar('\n');
	return (0);
}
