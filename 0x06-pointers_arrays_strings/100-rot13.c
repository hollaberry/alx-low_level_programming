#include "main.h"
/**
 * rot13 - funtion to encode in rot13
 * @str:pointer to the string
 * Return: Always (str)
 */
char *rot13(char *str)
{
int i, j, k;
char sep[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char pes[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; str[i] != '\0'; i++)
{

for (j = 0, k = 0; j < 53; j++, k++)
{
if (str[i] == sep[j])
{
str[i] = pes[k];
break;
}
}
}
return (str);
}
