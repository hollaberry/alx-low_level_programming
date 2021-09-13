#include "main.h"
/**
 * _strpbrk - search a string for any of a ste of bytes
 * @s: The string containing the full characters
 * @accept: string to match
 * Return: pointer to the byte in s that matches on eof the bytes in accept
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
