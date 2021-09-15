#include "main.h"
/**
 * factorial - function to calculate the factorial of a number recursively
 * @n: Argument of the int whose factorial is to be found
 * Return: Always 0 (success)
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
