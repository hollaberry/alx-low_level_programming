#include "main.h"

/**
 * main - function that copies the content of a file to another file
 * @argc: number of arguments passed to the programm
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int file_from, file_to, len, cl_f, cl_t;
char buffer[BUFSIZ];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

file_from = open(argv[1], O_RDONLY);

if (file_from < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((len = read(file_from, buffer, BUFSIZ)) > 0)
{
if (file_to < 0 || write(file_to, buffer, len) != len)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2])
close(file_from);
exit(99);
}
}
if (len < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

cl_f = close(file_from);
cl_t = close(file_to);

if (cl_f < 0 || cl_t < 0)
{
if (cl_f < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);

if (cl_t < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);

exit(100);
}
return (0);
}
