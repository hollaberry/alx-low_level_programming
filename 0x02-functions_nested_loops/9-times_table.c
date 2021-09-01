#include "main.h"
/**
 * times_table -function to multiply times table to table 9
 */
void times_table(void)
{
int i = 0, j, k;
while (i < 10)
{
j = 0;
while (j < 10)
{
k = i * j;
_putchar('0' + k);
_putchar('\n');
j++;
}
i++;
}
}
