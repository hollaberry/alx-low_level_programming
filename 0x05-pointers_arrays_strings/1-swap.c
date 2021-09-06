#include "main.h"
/**
 * reset_to_98 - function to change the value of a variable using a pointer
 * @a:first pointer to be swapped
 * @b:second pointer to be swapped
 * Return Always (0) (success)
 */
void reset_to_98(int *a, int *b)
{
int y = *a;
*a = *b;
 *b = y;
}
