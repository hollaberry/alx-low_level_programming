#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: arguments count
 * @av: argument vector
 * Return: return str for success and NULL for failure
 */
char *argstostr(int ac, char **av)
{
int i, j, k, len;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;

len++;
}

str = (char**) malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
return (str);
}
