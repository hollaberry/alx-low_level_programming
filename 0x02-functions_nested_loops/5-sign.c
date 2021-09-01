#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: This is the integer to be checked
 * Return: Always 1, 0, and -1 if n > 0, n < 0, and n = 0 respectively
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar('-' + 49);
return (-1);
}
}
