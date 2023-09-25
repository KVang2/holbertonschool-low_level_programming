#include "main.h"
/**
 * times_table - times table
 *
 * Return: 0
*/
void times_table(void)
{
	int x, y, z, a, b;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (y > 9)
			{
				a= z % 10;
				b= (z - a) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(b + '0');
				_putchar(a + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
