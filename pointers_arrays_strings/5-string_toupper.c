#include "main.h"
/**
 * char *string_toupper - changing all lowercase to upper in string
 * @str: alphabet letters
 * Return: 0
*/
char *string_toupper(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);
}
