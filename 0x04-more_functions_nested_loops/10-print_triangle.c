#include "main.h"
/**
 * print_triangle - function to print triangle of a given integer
 * @size: function argument to determine triangle properties
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
int i, j;
for (i = 1;  i <= size; i++)
{
for (j = size; j >= 1; j--)
{
if (j > i)
{
putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
