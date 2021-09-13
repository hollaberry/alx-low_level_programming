#include "main.h"
/**
 * _memset - Funtion to fill a memory with selected character
 * @s: The starting point to be filled with the character
 * @b: Character to be set in the selected memeory
 * @n: The chose amount of space to be filled
 * Return: Always s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned char* p = s;

while (n--)
{
*p++ = (unsigned char) b;
}

return s;
}
