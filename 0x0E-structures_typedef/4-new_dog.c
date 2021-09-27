#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - Function to initialise a variable of type struct dog
 * @name: string member of struct dog
 * @age: integer member of struct dog
 * @owner: string member of struct dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
for (len_n = 0; name[len_n] != '\0'; len_n++)
{
;
}
new_dog->name = malloc(sizeof(char) * len_n + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->name = _strcpy(new_dog->name, name);
for (len_o = 0; owner[len_o] != '\0'; len_o++)
{
;
}
new_dog->owner = malloc(sizeof(char) * len_o + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
new_dog->owner = _strcpy(new_dog->owner, owner);
new_dog->age = age;

return (new_dog);
}


/**
 * _strcpy - function that copies the string
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
*(dest + i) = *(src + i);
}
*(dest + i) = '\0';
return (dest);
}
