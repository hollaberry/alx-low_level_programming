#include "function_pointers.h"
/**
 * print_name - A function that prints a name using function pointer
 * @name: string passed as argument
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);

}
