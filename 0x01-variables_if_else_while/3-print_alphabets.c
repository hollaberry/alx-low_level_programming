#include <stdio.h>
/**
 * main- To print the alphabets in lower case and upper case
 * ch and uc are assigned values and are used to control the iteration
 * Return: Always 0 (success)
 */
int main(void)
{
char ch = 'a', up = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (up <= 'Z')
{
putchar(up);
up++;
}
putchar('\n');
return (0);
}
