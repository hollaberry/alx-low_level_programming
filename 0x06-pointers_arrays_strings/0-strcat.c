#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; src[i] != '\0'; i++)
{
for (i = 0; dest[j] != '\0'; j++)
{
;
}
dest[j] = dest[j] + src[i];
}
return (dest);
}
