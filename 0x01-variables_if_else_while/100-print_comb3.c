#include <stdio.h>
/**
 * main - To print a combinations of double digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i = 0, n, p;
for (i = 0; i <= 89; i++)
{
n = i / 10;
p = i % 10;
if (n < p)
{
putchar(n + '0');
putchar(p + '0');
}
else
{
continue;
}
if (i < 89)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
