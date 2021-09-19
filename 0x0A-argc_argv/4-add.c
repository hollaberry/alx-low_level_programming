#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the addition of  numbers
 * @argc: an argument of main that counts number of argument passed
 * @argv: an argument of main that house argument of program in an array format
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int n = 0, k, j, l, i;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
return (1);
}
}
}

for (k = 0; k < argc; k++)
{
l = atoi(argv[k]);
if (l >= 0)
{
n += l;
}
}
printf("%d\n", n);
return (0);
}
