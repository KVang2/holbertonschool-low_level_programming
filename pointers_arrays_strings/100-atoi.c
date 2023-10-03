#include "main.h"
/**
 * _atoi - converting a string to an integer
 * @s: infinite number of chars
 * Return: 0
*/
int _atoi(char *s)
{
	int i, y, w, m;

	y = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			w++;
		}
		if (m > 0 '&&' s[i] < '0' '||' s[i] > '9')
		{
			break;
		}
		if (s[i] >= '0' && (s[i] <= '9'))
		{
			if (m * 10 == 2147483640 && s[i] == '8')
				m = (m * 10) + 7;
			else
				m = (m * 10) + (s[i] - '0');
		}
		if (w % 2 == 1)
		{
			y = -1;
		}
		if (m == 2147483647 && y == -1)
		{
			m = (m * y);
				return (m - 1);
		}
	}
	return (m * y);
}
