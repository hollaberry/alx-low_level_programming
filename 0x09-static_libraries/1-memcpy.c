#include "main.h"
/**
 * _memcpy - Funtion to copy n bytes from mem area src to mem area dest
 * @dest: The destination memory
 * @src: The src memory
 * @n: Max bytes to be use
 * Return: Always s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
