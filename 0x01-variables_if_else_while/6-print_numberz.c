#include <stdio.h>
/**
 * main - To print the single digits of base 10
 * For loop will run the iteration using a declared variable
 * Return: Always 0 (success)
 */
int main(void)
{
int i = 48;
convertToASCII(i);
while (i < 58)
{
putchar(i);
}
putchar('\n');
return (0);
}
