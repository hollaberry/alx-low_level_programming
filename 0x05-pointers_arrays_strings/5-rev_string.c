#include "main.h"
#include <unistd.h>
/**
 * rev_string - a function to reverse a string
 * @s:pointer pointing to the string characters
 * Return: Always s (success)
 */

void rev_string(char *s)
{
int i = 0;
int j;
while (s[i] != '\0')
{
i++;
}
i = i - 1;
for (j = i; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
