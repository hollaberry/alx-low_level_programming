#include <stdio.h>
/**
 * main- To print in reverse the alphabets in lower case
 * ch is assigned a value of a and is used to control the iteration
 * Return: Always 0 (success)
 */
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
