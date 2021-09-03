#include "main.h"
/**
 * print_diagonal -function to print a diagonal line
 * @n: integer is value is to be use to determine length of straight line
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
_putchar(92);
else
_putchar(' ');
}
_putchar('\n');
}
return (0);
}
