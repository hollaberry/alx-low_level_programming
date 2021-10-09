#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
/**
 * struct list_f - typedef for struct
 * @str: string memeber of strcut
 * @len: lenght of the string
 * @next: pointer to the next node
 */

typedef struct list_f
{
char *str;
unsigned int len;
struct list_f *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
