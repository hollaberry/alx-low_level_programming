#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>


typedef struct list_f
{
  char *str
  unsigned int len;
  struct list_f *next;
} list_t;

size_t print_list(const list_t *h);

#endif
