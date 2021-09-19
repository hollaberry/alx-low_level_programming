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
int mul;
int x = atoi(argv[1]);
int y = atoi(argv[2]);
(void)argc;
if (argc != 3)
{
printf("Error\n");
return (1);
}
mul = x * y;
printf("%i\n", mul);
return (0);
}
