#include "main.h"
/**
 * times_table - 9 times table
 *
 *
 *
 * Return: 0
*/
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (y == 0)
				_putchar("%d, ", z);
			else
			{
				_putchar("%2d, ", z);
				if (y != 9)
					_putchar(", ");
			}
		}
		_putchar("\n");
	}		
}
