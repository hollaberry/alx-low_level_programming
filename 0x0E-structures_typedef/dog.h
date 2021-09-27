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
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
#endif
