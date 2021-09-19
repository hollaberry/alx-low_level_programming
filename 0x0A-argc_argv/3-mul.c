#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that printsthe multiplication of two numbers
 * @argc: an argument of main that counts number of argument passed
 * @argv: an argument of main that house argument of program in an array format
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
int mul, i;
long int x = atoi(argv[1]);
long int y = atoi(argv[2]);

for (i = 0; i < argc; i++)
{
if (argc <= 1)
{
printf("Error\n");
return (-1);
}
else if (argc == 2)
{
mul =  x * y;
}
printf("%d\n", sum);
return (0);
}
