#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: The size of char array
 * @c: variable to hold the char data
 * Return: Always (0)
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;

p = malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
i = 0;
while (i < size)
{
i++;
p[i] = c;
}

return (p);
free(p);
}
