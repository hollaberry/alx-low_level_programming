#include "main.h"
/**
 * reverse_array - function to reverse a string
 * @a: pointer to array
 * @n: interger array size
 * Return: Always array in reverse
 */
void reverse_array(int *a, int n)
{
int len, i, temp;
len = n - 1;
for (i = 0; i < len; i++, j--)
{
temp = a[i];
a[i] = a[len];
a[len] = temp;
}
}
