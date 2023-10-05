#include "main.h"
/**
 * char *string_toupper - changing all lowercase to upper in string
 * @a: alphabet letters
 * Return: 0
*/
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = (a[i] - 32);
			i++;
		}
	}
	return (a);
}
