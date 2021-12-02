#include "main.h"
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
