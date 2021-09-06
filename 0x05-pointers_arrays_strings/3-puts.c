#include "main.h"
/**
 * _puts - a function to write a string to std out
 * @str:pointer pointing to the string characters
 * Return: Always str (success)
 */
void _puts(char *str)
{
return (write(1, str, 64));
}
