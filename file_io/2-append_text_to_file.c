#include "main.h"
/**
 * append_text_to_file - end of a file
 * @filename: name of file
 * @text_content: text content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int crt;
	int l;
	int wr;

	if (!filename)
	{
		return (-1);
	}
	crt = open(filename, O_WRONLY | O_APPEND);

	if (crt == -1)
		return (-1);

	if (text_content)
	{
		for (l = 0; text_content[l]; l++)
			;
		wr = write(crt, text_content, l);
	
		if (wr == -1)
			return (-1);
	}
	close (crt);
	return (1);
}
