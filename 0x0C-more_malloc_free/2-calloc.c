#include "main.h"
#include <stdlib.h>
/**
 * _memset - Funtion to fill a memory witha constant byte
 * @s: The starting point to be filled with the character
 * @b: Character to be set in the selected memory (constant)
 * @n: Max bytes to be use
 * Return: Always s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: size of data type
 * @size: size of array
 * Return: void pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);
if (p == 0)
return (NULL);

_memset(p, 0, nmemb * size);
return (p);
}
