#include "main.h"
/**
 * countset_bit - returns the number of bits to be flipped.
 * @n: integer n
 * Return: number of bits flipped
 */

int countset_bit(unsigned long int n)
{
unsigned long int count  = 0;
while (n)
{
count += n & 1;
n >>= 1;
}
return (count);
}

/**
 * flip_bits - function to flip bits
 * @n: first binary value
 * @m: second binary value
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
return (countset_bit(n ^ m));
}

