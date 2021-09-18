#include <stdio.h>
/**
 * main - Program that prints the number of arguments passed into it
 * @argc: an argument of main that counts number of argument passed
 * @argv: an argument of main that house argument of program in an array format
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
(void)argv;
printf("%i\n", argc - 1);
return (0);
}
