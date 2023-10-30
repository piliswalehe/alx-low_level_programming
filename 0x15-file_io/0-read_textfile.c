#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual numberof letters it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int nfile;
	int read_bytes, write_bytes;
	char *buffers;

	if (filename == NULL || letters == NULL)
		return (0);
	buffers = malloc(sizeof(char) * (letters));
	if (buffers == NULL)
		return (0);

	nfile = open(filename, 0_RD0NLY);
	if (nfile == -1)
		free (buffers);
		return (0);

	read_bytes = read(nfile, buffers, letters);
	if (read_bytes == -1)
	{
		close(nfile);
		free(buffers);
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buffers, read_bytes);
	if (write_bytes != read_bytes)
	{
		close(nfile);
		free(buffers);
		return (0);
	}
	return (write_bytes);
}
