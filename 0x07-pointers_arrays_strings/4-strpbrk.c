#include "main.h"
/**
 * _strspn - Funtion to get the length of a prefix substring
 * @s: The string containing the full characters
 * @accept: string to be checked
 * Return: Always s
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
p = &s[i];
return (p);
}
j++;
}
i++;
}
return (0);
}
