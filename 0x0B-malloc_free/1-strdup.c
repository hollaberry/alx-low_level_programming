#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that return a pointer to a newly created space in memor
 * @str: The size of char array
 * Return: Always (p) or (NULL)
 */
char *_strdup(char *str)
{
int len, i, j;
char *p;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
;
}
len  = i;

p = malloc((len + 1) * sizeof(char));
if (p == NULL)
{
return (NULL);
}
for (j = 0; j < len; j++)
{
p[j] = str[j];
}
p[j] = '\0';
return (p);
}
