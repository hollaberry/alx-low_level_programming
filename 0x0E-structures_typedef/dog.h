#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a define structure of a dog
 * @name: character string
 * @age: float
 * @owner: character owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_u;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
