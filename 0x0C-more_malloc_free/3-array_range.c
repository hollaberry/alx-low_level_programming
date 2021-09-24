#include "main.h"
#include <stdlib.h>
/**
 * array_range - function to create array of integers
 * @min: starting value of array
 * @max: end point of array
 * Return: always ptr or NULL
 */
int *array_range(int min, int max)
{
int *p;
int i, j;
if (min > max)
{
return (NULL);
}
j = max - min;
p = malloc((j + 1) * sizeof(int))

if (p == NULL)
{
return (NULL);
}

for (i = 0; min + i < max; i++)
{
p[i] = min + i;
}
return (p);
}
