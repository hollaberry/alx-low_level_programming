#include "main.h"
/**
 * print_last_digit -function to check the absolute value of an integer
 * @c:This is the integer whose last digit needs to be picked up
 * Return: Always the abs value of the number
 */
int print_last_digit(int c)
{
int m;
if (c < 0)
{
c = (c * -1);
}
m = c % 10;
if (m < 0)
m = -m;
_putchar(m + '0');
return (m);
}
