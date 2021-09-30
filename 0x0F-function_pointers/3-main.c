#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that performs simple operation
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: outcome of operation
 */
int main(int argc, const char *argv[])
{ int num1, num2;
char *op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((get_op_func(op) == '/' && argv[2] == 0) ||
(get_op_func(op) == '%' && argv[2] == 0))
{
printf("Error\n");
exit(100);
}

printf ("%d\n", get_op_func(op)(num1, num2));
return (0);
}
