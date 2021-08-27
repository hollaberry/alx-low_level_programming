#include <stdio.h>
/**
 * main - To print the lowercase alphabets with the exceptions of q and e
 * ch is assigned a value of a and is used to control the iterations
 * Return: Always 0 (success)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
if (ch == 'q' || ch == 'e')
{
continue;
}
ch++;
}
putchar('\n');
return (0);
}
