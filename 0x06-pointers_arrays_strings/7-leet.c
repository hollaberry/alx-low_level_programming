#include "main.h"
/**
 * leet - function to change specific members of a string
 * @str:pointer to the string
 * Return: Always (str)
 */
char *leet(char *str)
{
int i, k, j;
char sep[] = "aAeEoOtTlL";
char pes[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0, k = 0; j < 10; j++, k++)
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
