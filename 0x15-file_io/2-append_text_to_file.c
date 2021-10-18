#include "main.h"
/**
 * append_text_to_file - function to append text at the end  of a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1 
 * if text_content is NULL, DONT ADD ANYTHING
 * if file already exIST RETURN 1 otherwise return -1
 */

int create_file(const char *filename, char *text_content)
{
int fd, i = 0;
if (filename == NULL)
return (-1);

fd = open(filename, O_RDONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content)
{
while (text_content[i])
i++;
if (write(fd, text_content, i) != i)
return (-1);
}
close(fd);
return (1);
}
