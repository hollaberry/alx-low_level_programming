#include "main.h"
/**
 * string_toupper - function to print all lowercase letter to uppercase
 * @str:pointer to the string
 * Return: Always (str)
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
str[i] -= 32;
}
return (str);
}
