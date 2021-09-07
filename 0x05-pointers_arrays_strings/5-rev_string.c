#include "main.h"
/**
 * rev_string - a function to reverse a string
 * @s:pointer pointing to the string characters
 * Return: nothing
 */

void rev_string(char *s)
{
int len = 0;
int j;
char k;

while (*(s + len) != '\0')

len += 1;

len -= 1;

while (j < len)
{
k = s[len];
s[len] = s[j];
s[j] = k;

j++;
len--;
}
}
