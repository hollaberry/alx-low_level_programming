#include "main.h"
/**
 * _strstr - search for the occurence of a string in a string
 * @haystack: The main string
 * @needle: substring to be checked
 * Return: the first occurence of substring
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *begin = haystack;
char *pattern = needle;

while (*haystack && *pattern && *haystack == *pattern)
{
haystack++;
pattern++;
}
if (!*pattern)
return (begin);

haystack = begin + 1;
}
return ('\0');
}
