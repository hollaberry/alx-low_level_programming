#include <stdio.h>
/*
 * main - Prototype of function to print alphabets
 *
 * Return Always 0 (success)
 */
void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
}
