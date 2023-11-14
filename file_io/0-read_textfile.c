#include "main.h"
/**
 * read_textfile - read/print file to POSIX standard output
 * @filename: name of file
 * @letters: size
 * Return: actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr, f;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	if (buffer == NULL)
	{
		close(f);
		return (0);
	}
	rd = read(f, buffer, letters);
	close(f);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	return (wr);
}
