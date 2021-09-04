#include "main.h"
/**
 * print_number - function to print numbers
 * @n: variable argument which house to number to be printed
 * Return: Always 0 (success)
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n > 9)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
_putchar('\n');
}
