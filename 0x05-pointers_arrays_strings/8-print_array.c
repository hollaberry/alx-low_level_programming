#include <stdio.h>
#include "main.h"
/**
 * print_array - a function to print the elements of an array
 * @a:pointer pointing to the array
 * @n: numbers of elements in array
 * Return: nothing
 */

void print_array(int *a, int n)
{
int i = 0;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
