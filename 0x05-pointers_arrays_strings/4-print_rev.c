#include "main.h"
#include <unistd.h>
/**
 * print_rev - a function to write a string in reverse to std out
 * @str:pointer pointing to the string characters
 * Return: Always str (success)
 */

void print_rev(char *s)
{
int i = 0;
int j;
while (str[i] != '\0')
{
i++;
}
for (j = i; j >= 0; --j)
{
_putchar(s[j]);
}
_putchar('\n');
}
