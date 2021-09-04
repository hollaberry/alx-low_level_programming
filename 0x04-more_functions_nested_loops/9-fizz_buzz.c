#include "main.h"
#include <stdio.h>
/**
 * main - Program to print from 1 to 100
 * But for multiple of three, Fizz should be printed
 * For multiple of 5, Buzz should be printed
 * For multiple of 3 & 5, FizzBuzz should be printed
 * Return: Always 0 (success)
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && !(i % 5 == 0))
{
printf(" Fizz");
}
else if ((i % 5 == 0) && !(i % 3 == 0))
{
printf(" Buzz");
}
else if (i % 15 == 0)
{
printf(" FizzBuzz");
}
else if (i == 1)
{
printf("%d", i);
}
else
{
printf(" %d", i);
}
printf(" ");
}
printf("\n");
return (0);
}
