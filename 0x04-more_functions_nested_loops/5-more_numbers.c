#include "main.h"
/**
 * more_numbers -function to print numbers from 0 to 14 10 times
 * Return: Always 1 (success)
 */
void more_numbers(void)
{
int i = 0, n, p, j;
for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 14; i++)
{
n = i / 10;
p = i % 10;
if (i > 10)
{
putchar(n + '0');
}
if (i != 10)
{
putchar(p + '0');

}
}

putchar('\n');
}
return (0);
}
