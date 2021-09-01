#include "main.h"
/**
 * print_alphabet_x10 - Prototype of function to print alphabets
 *
 * Return Always 0 (success)
 */
void print_alphabet_x10(void)
{
int i = 1;
char ch = 'a';
for (i = 1; i <= 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
