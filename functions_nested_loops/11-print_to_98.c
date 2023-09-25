#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing numbers
 * @n: numbers to print
 * Return: 0
*/
void print_to_98(int n)
{
	int m;

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{

				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}	
}
