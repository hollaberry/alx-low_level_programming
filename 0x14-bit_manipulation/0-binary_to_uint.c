#include "main.h"
/**
 * binary_to_uint - function that converts binary to integer
 * @b: pointer to a binary string
 * Return: decimal or null
 */





unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int decval = 0;

if (!b)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);

decval = 2 * decval + (b[i] - '0');
}
return (decval);
}
