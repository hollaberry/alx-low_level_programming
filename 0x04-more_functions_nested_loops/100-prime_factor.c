#include <stdio.h>
#include <math.h>
/**
 * main - program to print the highest prime factor of 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n = 612852475143;
int i, max = -1;
while (n % 2 == 0)
{
max = 2;
n = n / 2;
}
for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
max = i;
n = n / i;
}
}
if (n > 2)
{
max = n;
}
printf("%d\n", max);
return (max);
}
