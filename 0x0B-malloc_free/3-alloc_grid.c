#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that allocate a memory grid
 * @width: row size of grid
 * @height: column size of grid
 * Return: Always (p) or NULL
 */
int **alloc_grid(int width, int height)
{
int i, j;

int **p;
p = malloc(sizeof(*p) * height);

if (height <= 0 || width <= 0 || p == 0)
return (NULL);
else
{

for (i = 0; i < height; i++)
{
p[i] = malloc(sizeof(**int) * width);
if (p[i] == 0)
{
while (i--)
free(p[i]);
free(p);
return (NULL);
}
for (j = 0; j < width; j++)
p[i][j] = 0;
}

}
return (p);
}
