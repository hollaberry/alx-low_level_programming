#include <stdio.h>
#include <stdlib.h>

/**
 * check - function to  check if array contain a non int
 * @s: pointer to string
 * Return: Always 0
 */
int check(const char *s)

{
int i;
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
return (1);

i++;

}
return (0);
}

/**
 * main - Program that prints the addition of  numbers
 * @argc: an argument of main that counts number of argument passed
 * @argv: an argument of main that house argument of program in an array format
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
int n = 0;
while (--argc)
{
if (check(argv[argc]))
{
printf("Error\n");
return (1);
}
n += atoi(argv[argc]);
}

printf("%i\n", n);
return (0);
}
