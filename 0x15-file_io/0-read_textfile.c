#include "main.h"
/**
 * read_textfile - function to read a text file and print to the standard out
 * @filename: name of the file to be read
 * @letters: number of letters to be read
 * Return: number of letters it could read or print.0
 * if file cant open or read or filename is null or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, i;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

i = read(fd, buffer, letters);

if (write(STDOUT_FILENO, buffer, i) != i)
return (0);

close(fd);
free(buffer);

return (i);
}

