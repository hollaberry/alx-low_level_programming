#include <stdio.h>
/**
 * main - To print a combinations of double digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i = 0, n, q = 50, p;
while (i <= 89)
{
i++;
n = i / 10;
p = i % 10;
while (q < 58)
{
q++;
if (q > p || n > i)
{
putchar(n + '0');
putchar(p + '0');
putchar(q);
}
else
{
continue;
}
if (n != 55 || p != 56)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
