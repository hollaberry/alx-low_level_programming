#include "main.h"
/**
 * _abs -function to check the absolute value of an integer
 * @c: This is the integer to be check for its absolute value
 * Return: Always the abs value of the number
 */
int _abs(int c)
{
if (c < 0)
{
c = (c * -1);
}
return (c);
}
