#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - func that concat 2 strings and save in newly created mem
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: size
 * Return: Always (p) or (0) if p == 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int len, len1, len2;
unsigned int i, j;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (len2 = 0; s2[len2] != '\0'; len2++)
{
;
}
for  (len1 = 0; s1[len1] != '\0'; len1++)
{
;
}
len = len1 + len2;
if (n < len2)
p = malloc(sizeof(char) * (len1 + n + 1));
else
p = malloc(sizeof(char) * (len + 1));
if (p == 0)
{
return (NULL);
}
for (j = 0; s1[j] != '\0'; j++)
{
p[j] = s1[j];
}
for (i = 0; s2[i] != '\0' && i < n; j++, i++)
{
p[j] = s2[i];
}

p[j] = '\0';
return (p);
}
