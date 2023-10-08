#include "main.h"
/**
 * read_textfile-  reads a text file and prints it to the POSIX standard output
 * @filename: text file to be read
 * @letters: the number of letters to be read
 * Return: written- the number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t no_bites;
	ssize_t written;

	buffer = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	no_bites = read(fd, buffer, letters);
	written = write(STDOUT_FILENO, buffer, no_bites);
	if (written == -1)
		return (0);
	free(buffer);
	close(fd);
	return (written);
}
