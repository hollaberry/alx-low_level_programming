#include "main.h"
/**
 * _strlen - function to swap two variables using pointers
 * @s:pointer pointing to the string characters
 * Return: Always count (success)
 */
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
