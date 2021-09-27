#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - a define structure of a dog
 * @d: pointer to dog
 */
void print_dog(struct dog *d)
{

if (d != NULL)
{
printf("Name: %s\nAge: %f\nOwner: %s\n",
(*d).name != NULL ? d->name : "(nil)",
(*d).age,
(*d).owner != NULL ? d->owner : "(nil)");
}
}
