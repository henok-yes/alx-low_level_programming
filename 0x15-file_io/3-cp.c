
#include "main.h"

/**
* buffer_creater - create a buffor and read the contents of a file into it.
* @file: The name of the file buffer to read
*
* Return: A pointer to dynamically allocated buffer.
*/
char *buffer_creater(char *file)
{
char *buff;

buff = malloc(sizeof(char) * 1024);

if (buff == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (buff);
}

/**
* file_closer - Closes file descriptors.
* @fd: The file descriptor to be closed.
*/
void file_closer(int fd)
{
int closer;

closer = close(fd);

if (closer == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
* main - Entry point of the program
* Copies the contents of a file to another file.
* @ac: number of arguments supplied to the program.
* @argv: An array of command-line argument strings
*
* Return: 0 on success.
*/
int main(int ac, char *argv[])
{
int from, fd_to, rd, written;
char *buffer;

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = buffer_creater(argv[2]);
from = open(argv[1], O_RDONLY);
rd = read(from, buffer, 1024);
fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || rd == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

written = write(fd_to, buffer, rd);
if (fd_to == -1 || written == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

rd = read(from, buffer, 1024);
fd_to = open(argv[2], O_WRONLY | O_APPEND);

} while (rd > 0);
free(buffer);
file_closer (from);
file_closer (fd_to);
return (0);
}
