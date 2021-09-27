#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function to initialise a variable of type struct dog
 * @d: struct dog pointer
 * @name: string member of struct dog
 * @age: integer member of struct dog
 * @owner: string member of struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
