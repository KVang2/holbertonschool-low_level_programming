#include "main.h"
/**
 * _atoi - converting a string to an integer
 * @s: infinite number of chars
 * Return: 0
*/
int _atoi(char *s)
{
	int i, y, w, m;

	m = 0;
	w = 0;
	y = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			w++;
		}
		if ((s[i] < '0' || s[i] > '9') && (m > 0))
		{
			break;
		}
		if (s[i] >= '0' && (s[i] >= '9'))
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
	i++;
	return (m * y);
	}
}
