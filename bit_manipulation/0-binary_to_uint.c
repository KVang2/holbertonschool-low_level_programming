#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: char
 * Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int length = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (length = 0; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
	}
	for (length = 0; b[length] != '\0'; length++)
	{
		i <<= 1;
		if (b[length] == '1')
			i += 1;
	}
	return (i);
}
