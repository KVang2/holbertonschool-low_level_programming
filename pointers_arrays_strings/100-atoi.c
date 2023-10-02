#include "main.h"
/**
 * _atoi - converting a string to an integer
 * @s: infinite number of chars
 * Return: 0
*/
int _atoi(char *s)
{
	int i, x, y, w, n, m;

	while (s[x] != '\0')
	{
		x++;
	}
	while (i < x && y == 0)
	{
		if (s[i] == 45)
		{
			++w;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			m = s[i] - 48;
		}
		if (w % 2)
		{
			m = -m;
			n = n * 10 + m;
			y = 1;
		}
		if (s[i + 1] < 48 && s[i + 1] > 57)
		{
			break;
			y = 0;
		}
		i++;
	}
	if (y == 0)
	{
	return (0);
	}
return (n);
}
