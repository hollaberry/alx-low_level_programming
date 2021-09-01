#include "main.h"
/**
 * print_alphabet_x10 - Prototype of function to print alphabets
 *
 * Return Always 0 (success)
 */
void print_alphabet_x10(void)
{
int i = 0;
char ch = 'a';
for (1 = 0; i <= 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
}
_putchar('\n');
}
