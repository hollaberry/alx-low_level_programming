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
while (str[len] != '\0')
{
if (str[len] % 2 == 0)
_putchar(str[i]);
}
len++;
}
_putchar('\n');
}
