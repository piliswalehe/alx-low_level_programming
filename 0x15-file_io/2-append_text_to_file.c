#include "main.h"

/**
 * append_text_to_file - function that appens text to the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int nfile;
	ssize_t text_length, length = 0;
	char *pointer;

	if (filename == NULL)
		return (-1);

	nfile = open(filename, O_WRONLY | O_APPEND);
	if (nfile == -1)
		return (-1);
	for (pointer = text_content; *pointer; pointer++)
			length++;
		text_length = write(nfile, text_content, length);

	if (close(nfile == -1))
		return (-1);

	return (text_length);
}
