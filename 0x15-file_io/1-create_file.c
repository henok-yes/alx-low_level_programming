#include "main.h"
/**
 * create_file - Create a file
 * @filename: a pointer to the name of the file to be created.
 * @text_content: text content to write to the created  file.
 *
 * Return: 0 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{

int fd;
ssize_t written;
int length = 0;

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
	return (-1);
if (filename == NULL)
	return (-1);
else
	for (length = 0; text_content[length] != '\0'; length++)
		;
written = write(fd, text_content, length);
if (written == -1)
	return (-1);
close(fd);
return (1);
}
