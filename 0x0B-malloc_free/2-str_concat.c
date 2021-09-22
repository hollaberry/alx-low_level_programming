#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concat 2 strings and save in newly created mem
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: Always (p) or (0) if p == 0
 */
char *str_concat(char *s1, char *s2)
{
int len, len1, len2, j;
char *p;
for (len2 = 0; s2[len2] != '\0'; len2++)
{
;
}
for  (len1 = 0; s1[len1] != '\0'; len1++)
{
;
}
len = len1 + len2;
p = malloc(len *sizeof(char) + 1);
if (p == NULL)
{
return (NULL);
}
for (j = 0; j < len; j++)
{
if (j < len1)
p[j] = s1[j];
else
p[j] = s2[j - len1];
}
p[j] = '\0';
return (p);
}
