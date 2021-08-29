#include <stdio.h>
/**
 * main - To print a combinations of double digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i = 0, n, q;
for (i = 48;  i < 58; i++)
{
for (n = 48; n < 58; n++)
{
for (q = 50; q < 58; q++)
{
if (q > n && n > i)
putchar(i);
putchar(n);
putchar(q);
}
if (i != 55 || n != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
