#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the name of the file it is compiled from
 * Return: Always (0)
 */
int main(int argc, const char *argv[])
{
printf("%s\n", __FILE__);
return (0);
}
