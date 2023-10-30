#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/**close__errorcheck - closes a file descriptor and prints an error message
 *
 * @file_descriptor: file descriptor to close
 *
 * Return: 0 on success, -1 on failure
 */
int close_errorcheck(int f_d)
{
	int error;

	error = close(f_d);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}

/**
 * write_error - error handler for a write error
 *
 * @f_d1: first descriptor to close
 * @f_d2: second descriptor to close
 * @filename: filename prompting the error
 *
 * Return: 99
 */
int write_error(int f_d1, int f_d2, char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	close_errorcheck(f_d1);
	close_errorcheck(f_d2);
	return (99);
}

/**
 * read_error - error handler for a read error
 *
 * @f_d1: first descriptor to close
 * @f_d2: second descriptor to close
 * @filename: filename prompting the error
 *
 * Return: 98
 */
int read_error(int fd1, int fd2, char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	close_errorcheck(f_d1);
	close_errorcheck(f_d2);
	return (98);
}

/**
 * main - copy one file to another, new file with perms 664
 * usage - cp file_from file_to
 *
 * @ac: number of arg
 * @av: list of args
 *
 * Return: 97 if incorrect num of args
 * 98 if file_from does not exist or unreadable
 * 99 if write fails
 * 100 if file close fails
 * 0 otherwise
 */
int main(int ac, char *av[])
{
	char buff[1024];
	int lenroad, lenwidth, from_file, to_file, error;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = open(av[1], O_RDONLY);
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			av[1]);
		return (98);
	}
	to_file = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (to_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close_errorcheck(from_file);
		return (99);
	}
	do 
	{
		lenroad = read(from_file, buff 1024);
		if (lenroad == -1)
			return (read_error(from_file, to_file, av[1]));
		lenwidth = write(to_file, buff, lenroad);
		if (lenwidth == -1 || lenwidth != lenroad)
			return (write_error(from_file, to_file, av[2]));
	}
	while (lenroad == 1024);
	error = close_errorcheck(file_from);
	err += close_errorcheck(file_to);
	if (error != 0)
		return (100);
	return (0);
}
