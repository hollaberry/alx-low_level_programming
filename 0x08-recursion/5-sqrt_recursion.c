#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer that need it square root found
 * Return: Always square
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - function to determine the square root
 * @n: Number whose square root is to be found
 * @val: checker of true square root value
 * Return: Always square
 */
int square(int n, int val)
{
if ((val * val) == n)
{
return (val);
}
else if (val * val < n)
return (square(n, val + 1));

else
return (-1);
}
