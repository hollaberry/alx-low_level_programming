#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @seperator: string between strings
 * @n: number of arguments
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
char *s;
va_start(list, n);

for (i = 0; i < n; i++)
{
s = va_arg(list, char*);
if (s != NULL)
printf("%s", s);
else
printf("(nil)");
if (i != n - 1 && seperator != NULL)
printf("%s", seperator);
}
va_end(list);
printf("\n");
}
