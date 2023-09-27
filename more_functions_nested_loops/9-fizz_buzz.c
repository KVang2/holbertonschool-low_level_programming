#include "main.h"
/**
 * main - fizzbuzzer
 *
 * Return: 0
*/
int main(void)
{
	int x;

	for x in {1..100}
	{
		if ((x % 3 == 0 && x % 5 == 0))
		{
			_putchar("FizzBuzz");
		}
		else if ((x % 3 == 0))
		{
			_putchar("Fizz");
		}
		else if ((x % 5 == 0))
		{
			_putchar("Buzz");
		}
		else
		{
			_putchar(x + '0');
		}
	}
return (0);
}
