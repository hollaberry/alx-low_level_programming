#include "main.h"
/**
 * _strspn - Funtion to get the length of a prefix substring
 * @s: The string containing the full characters
 * @accept: string to be checked
 * Return: Always s
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, k = 0;
for (i = 0; s[i] >= '\0'; i++)
{
for (j = 0; accept[j] > '\0'; j++)
{
if (s[i] == accept[j])
{
k++;
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (k);
}
