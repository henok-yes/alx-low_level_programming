#include "main.h"

/**
* append_text_to_file -  appends text at the end of a file..
* @filename: A pointer to the name of the file to be appended.
* @text_content: text content to be added to the end of file.
*
* Return: on success (1) ,otherwise Ifthe function fails to open the file
* or if the file does not  exist (-1)
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int written, length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (length = 0; text_content[length]; length++)
;
}
fd = open(filename, O_WRONLY | O_APPEND);
written = write(fd, text_content, length);
if (fd == -1 || written == -1)
return (-1);
close(fd);
return (1);
}
