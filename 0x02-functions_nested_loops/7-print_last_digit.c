#include "main.h"
#include <limits.h>
/**
 * print_last_digit -function to check the absolute value of an integer
 * @c:This is the integer whose last digit needs to be picked up
 * Return: Always the abs value of the number
 */
int print_last_digit(int c)
{
if (c < 0)
{
c = (c * -1);
}
else if (c == INT_MIN)
{
  c = ((c * -1) + 1);
}
c = c % 10;
_putchar(c + '0');
return (c);
}
