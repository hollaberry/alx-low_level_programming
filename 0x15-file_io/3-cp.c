#include "main.h"

/**
 * main - function that copies the content of a file to another file
 * @argc: number of arguments passed to the programm
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int file_r, file_t, len, a, b;
char buf[BUFSIZ];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_r = open(argv[1], O_RDONLY);
if (file_r < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((len = read(file_r, buf, BUFSIZ)) > 0)
{
if (file_t < 0 || write(file_t, buf, len) != len)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_r);
exit(99);
}
}
if (len < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
a = close(file_r);
b = close(file_t);
if (a < 0 || b < 0)
{
if (a < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_r);
if (b < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_t);
exit(100);
}
return (0);
}
