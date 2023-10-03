#include "main.h"
/**
* int _atoi - string to an integer
* @s: string
* Return: 0
*/
int _atoi(char *s)
{
	int c, n, m, i;

	while (s[c])
	{
	if (s[c] == 45)
	{
		m *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
		i = 1;
		n = (n * 10) + (s[c] - '0');
		c++;
	}
		if (i == 1)
		{
		break;
		}
		c++;
	}
		n *= m;
	return (n);
}
