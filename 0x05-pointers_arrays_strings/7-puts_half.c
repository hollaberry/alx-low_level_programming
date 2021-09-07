#include "main.h"
/**
 * puts_half - a function to print half the characters of a string
 * @str:pointer pointing to the string characters
 * Return: nothing
 */

void puts_half(char *str)
{
int len = 0;
int i = 0;
while (str[len] != '\0')
{
len++;
}

for (i = 0.5 * (len); i < len; i++)
{
_putchar(str[i]);
if ((len - 1) % 2 == 0)
_putchar(str[len]);
}
_putchar('\n');
}
