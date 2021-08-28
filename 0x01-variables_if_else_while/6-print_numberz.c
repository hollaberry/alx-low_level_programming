#include <stdio.h>
/**
 * main - To print the single digits of base 10 using only putchar
 * For loop will run the iteration using a declared variable
 * Return: Always 0 (success)
 */
int main(void)
{
int i = 0;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
