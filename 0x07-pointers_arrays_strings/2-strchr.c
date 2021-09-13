#include "main.h"
/**
 * _strchr - Funtion to copy n bytes from mem area src to mem area dest
 * @s: The string to be check for character presence
 * @c: character to be checked
 * Return: Always s
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s);
}
}
}
