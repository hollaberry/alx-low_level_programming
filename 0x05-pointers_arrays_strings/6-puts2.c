#include "main.h"
/**
 * puts2 - a function to print every other character of a string
 * @str:pointer pointing to the string characters
 * Return: nothing
 */

void puts2(char *str)
{
int len = 0;
int i = 0;
char p[i];
while (str[len] != '\0')
{
len++;
}
len = len - 1;

for (i = 0; i < len; i + 2)
{
_putchar(str[i]);
p[i / 2] = str[i];
}
}
