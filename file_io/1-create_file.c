#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of a file
 * @text_content: char
 * Returns: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int str, wr, crt;

	str = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	crt = open(filename, O_CREAT | O_WRONLy | O_TRUNC < 0600);

	if (crt == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		text_content = "";

		while (text_content[str] != '\0')
			str++;
	}
	wr = write(crt, text_content, str);

	if (wr == -1)
	{
		return (-1);
	}
	close(crt);
	return (1);
}
