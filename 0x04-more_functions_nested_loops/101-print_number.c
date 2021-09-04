#include "main.h"
/**
 * print_number - function to print numbers
 * Return: Always 0 (success)
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
{
if (n > 9)
{
print_number(n / 10);
}

_putchar((n % 10) + '0');
}
