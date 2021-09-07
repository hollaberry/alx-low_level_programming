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
char *start, *end;
while (s[len] != '\0')
{
len++;
}
len = len - 1;
*start = &s[0];
*end = &s[len];
do {
len = *start;
*start = *end;
*end = len;
} while (++start < --end);
}
