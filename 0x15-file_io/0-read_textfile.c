#include "main.h"
/**
* read_textfile -read text file and print it to stdout
* @filename: pointer to a text file.
* @letters: size of the letter it reads.
* Return: the actual number of letters it could read and print
*        - (0)if the file can not be opened or read
*        - (0)filename is NULL
*        - (0)write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

int fd;
ssize_t bytes_written, bytes_read;
char *buffor;

buffor = NULL;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
close(fd);
return (0);
}
buffor = malloc((sizeof(char) * letters) + 1);
if (buffor == NULL)
{
close(fd);
free(buffor);
return (0);
}
bytes_read = read(fd, buffor, letters);
if (bytes_read != -1)
{
bytes_written = write(STDOUT_FILENO, buffor, bytes_read);
if (bytes_written != -1)
{
close(fd);
free(buffor);
return (bytes_written);
}
close(fd);
free(buffor);
return (bytes_read);
}
close(fd);
free(buffor);
return (0);
}
