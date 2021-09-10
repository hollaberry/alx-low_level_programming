#include "main.h"
/**
 * rot13 - funtion to encode in rot13
 * @s:pointer to the string
 * Return: Always (str)
 */
char *rot13(char *s)
{
int i, j;
char y[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char pes[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; str[i] != '\0'; i++)
{

for (j = 0; j < 52; j++)
{
if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
&& s[i] == y[j])
{
s[i] = pes[j];
break;
}
}
}
return (s);
}
