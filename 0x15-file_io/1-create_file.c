#include "main.h"
/**
 * create_file - function to create a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * file created must have rw------ permissions and if already exist
 * permission must not change
 * if file already exist truncate
 */

int create_file(const char *filename, char *text_content)
{
int fd, i = 0;
if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
