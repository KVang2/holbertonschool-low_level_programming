#include "main.h"
/**
 * times_table - 9 times table
 *
 *
 *
 * Return: void
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
			{
				_putchar(z + '0');
			}
			else
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
				if (y != 9)
				{
					_putchar(", ");
				}
			}
		}
		_putchar("\n");
	}
}
