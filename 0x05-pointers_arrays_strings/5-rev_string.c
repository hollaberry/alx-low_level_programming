#include "main.h"
#include <unistd.h>
/**
 * rev_string - a function to reverse a string
 * @s:pointer pointing to the string characters
 * Return: Always s (success)
 */

void rev_string(char *s)
{
int len = 0;
int j;
char k;

while (*(s + len) != '\0')
{
len++;
}
len = len - 1;
while (j < len)
{
k = s[len];
s[len] = s[j];
s[j] = k;

j++;
len--;
}
}
