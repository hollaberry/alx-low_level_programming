#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the minimum number of change
 * @argc: an argument of main that counts number of argument passed
 * @argv: an argument of main that house argument of program in an array format
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int coins[] = {25, 10, 5, 2, 1};
int j, input, res;
if (argc != 2)
{
printf("Error\n");

return (1);
}
input = atoi(argv[1]);
res = 0;
if (input < 0)
{
printf("0\n");
return (0);
}

for (j = 0; j < 5 && input >= 0; j++)
{
while (input >= coins[j])
{
res++;
input = input - coins[j];
}

}
printf("%d\n", res);
return (0);
}
