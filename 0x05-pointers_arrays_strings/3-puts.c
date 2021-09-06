#include "main.h"
#include <unistd.h>
/**
 * _puts - a function to write a string to std out
 * @str:pointer pointing to the string characters
 * Return: Always str (success)
 */

void _puts(char *str)
{
int count = 0;
while (*str != '\0')
{
count++;
str++;
}
write(1, str, count);
_putchar('\n');
}
