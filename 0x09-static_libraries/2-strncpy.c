#include "main.h"
/**
 * _strncpy - function that copies a string
 * @n: integer to hold size of n
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: Always (Dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
