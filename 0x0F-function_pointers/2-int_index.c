#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: - an integer array
 * @size: size of the array
 * @cmp: function pointer
 * Return: -1 if element fail or < 0 or return index of element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size < 1 || array == NULL || cmp == NULL)
{
return (-1);
}

for (i = 0; size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
