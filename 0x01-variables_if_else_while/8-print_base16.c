#include <stdio.h>
/**
 * main- To print all numbers of base 16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
char ch = 'a';
for (i = 0; i <= 9; i++)
putchar(i + '0');
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar(\n);
return (0);
}
