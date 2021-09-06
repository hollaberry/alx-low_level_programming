#include "main.h"
#include <unistd.h>
/**
 * _puts - a function to write a string to std out
 * @str:pointer pointing to the string characters
 * Return: Always str (success)
 */

int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}

void _puts(char *str)
{
int i;
i = _strlen(str);
write(1, str, i);
}
