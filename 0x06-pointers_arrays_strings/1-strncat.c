#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @n: integer to hold size of n
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: Always (Dest)
 */
char *_strncat(char *dest, char *src, int n)
{
int j, i;
for (j = 0; dest[j] != '\0'; j++)

;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[j + i] = src[i];


dest[j + i] = '\0';
return (dest);
}
