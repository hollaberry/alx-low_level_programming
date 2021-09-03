#include "main.h"
/**
 * print_square - function to print square of a given integer
 * @size: function argument to determine square properties
 * Return: Always 0 (success)
 */
void print_square(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}

_putchar('\n');

}
if (size <= 0)
{
_putchar('\n');
}
}
