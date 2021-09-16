#include "main.h"
/**
 * _pow_recursion - function that returns the value of x^y
 * @x: main value
 * @y: exponential value
 * Return: Always 0 (success)
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y == 1)
{
return (x);
}
return (x * _power_recursion(x, y - 1));
}
