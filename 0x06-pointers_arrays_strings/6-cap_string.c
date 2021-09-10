#include "main.h"
/**
 * cap_string - function to print all lowercase letter to uppercase
 * @str:pointer to the string
 * Return: Always (str)
 */
char *cap_string(char *str)
{
int i, k, j;
for (i = 0; str[i] != '\0'; i++)
{
k = 0;
if (i == 0)
{
k = 1;
}
else
{
for (j = 0; sep[j] != '\0'; j++)
{
if (str[i - 1] == sep[j]
{
k = 1;
break;
}
}
}

if (k == 1)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
}
return (str);
}
