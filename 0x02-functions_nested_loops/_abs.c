#include <stdlib.h>

/**
 * _abs - obtain the absolute value of c
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int x)
{
	return (write(1, x, 1));
}
