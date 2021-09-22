#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: arguments count
 * @av: argument vector
 * return: return str for success and NULL for failure
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
{
len++;
}
len++;
}

str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[j] = av[i][j];
k++;
}
str[j] = '\n';
k++;
}
return (str);
}
