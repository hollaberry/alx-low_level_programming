#include "main.h"
/**
 * puts_half - a function to print half the characters of a string
 * @str:pointer pointing to the string characters
 * Return: nothing
 */

void puts_half(char *str)
{
int len = 0;

for (len = 0; str[len] != '\0'; len++)
   ;

len++;


for (len /= 2; str[len] != '\0'; len++)
{
_putchar(str[len]);
}
_putchar('\n');
}
