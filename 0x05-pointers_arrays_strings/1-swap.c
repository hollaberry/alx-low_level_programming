#include "main.h"
/**
 * swap_int - function to swap two variables using pointers
 * @a:first pointer to be swapped
 * @b:second pointer to be swapped
 * Return Always (0) (success)
 */
void swap_int(int *a, int *b)
{
int y = *a;
*a = *b;
*b = y;
}
