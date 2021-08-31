#include <stdio.h>
void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
}
/**
 * main- Prototype of function declaration
 *
 * Return: Always ch (success)
 */
int main(void)
{
print_alphabet();
putchar('\n');
return (0);
}
