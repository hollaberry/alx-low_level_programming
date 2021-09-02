#include "main.h"
/**
 * print_numbers -function to print numbers from 0 to 9
 * Return: Always 1 (success)
 */
void print_most_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i != 50 || i != 52)
{
_putchar(i);
}
}
_putchar('\n');
}
