#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int nfile;
	int write_byte, length = 0;
	char *pointer;

	if (filename == NULL)
		return (-1);

	nfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (nfile == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (pointer = text_content; *pointer; pointer++)
			length++;
		write_byte = write(nfile, text_content, length);
	}
	if (write_byte == -1)
	{
		close(nfile);
		return (-1);
	}
	return (1);
}
