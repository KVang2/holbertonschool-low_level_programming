#include <stdio.h>
/**
 * main - alpabet soup
 *
 * Return: 0
*/
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
		putchar(n);
		}
	}
	putchar('\n');

	return (0);
}
