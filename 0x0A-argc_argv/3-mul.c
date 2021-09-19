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
(void)argc;
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
