#include "main.h"
/**
 * factorial - function to calculate the factorial of a number recursively
 * @n: Argument of the int whose factorial is to be found
 * Return: Always 0 (success)
 */
int factorial(int n)
{
int j;
for (j = n; j > 0; j--)
{
j = n * (n - 1) * (j - 1);
if (j <= 1)
{
return (1);
}
return (n * factorial(n - 1));
}
}
