#include "main.h"
/**
 * read_textfile - read/print file to POSIX standard output
 * @filename: name of file
 * @letters: size
 * Return: actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr, op;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (buffer == NULL)
	{
		close(op);
		return (0);
	}
	if (op == -1 || rd == -1 || wr == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (wr);
}
