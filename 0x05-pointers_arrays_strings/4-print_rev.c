#include "main.h"
#include <unistd.h>
/**
 * print_rev - a function to write a string in reverse to std out
 * @s:pointer pointing to the string characters
 * Return: Always str (success)
 */

void print_rev(char *s)
{
int i = 0;
int j;
while (s[i] != '\0')
{
i++;
}
for (j = i; j >= 0; --j)
{
_putchar(s[j]);
}
}
