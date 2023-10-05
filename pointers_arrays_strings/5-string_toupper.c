#include "main.h"
/**
 * char *string_toupper - changing all lowercase to upper in string
 * @str: alphabet letters
 * Return: 0
*/
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
			str[i] -= 32;
			i++;
	}
	}
	return (str);
}
