#include <stdio.h>
/**
 * main - Program that prints all the arguments passed into it
 * @argc: an argument of main that counts number of argument passed
 * @argv: an argument of main that house argument of program in an array format
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
int i;
void(argc);
for (i = 0; i< argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
