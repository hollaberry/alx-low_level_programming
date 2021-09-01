#include "main.h"
/**
 * print_last_digit -function to check the absolute value of an integer
 * @c:This is the integer whose last digit needs to be picked up
 * Return: Always the abs value of the number
 */
int print_last_digit(int c)
{
c = c % 10;
_putchar(c);
return (c);
}
