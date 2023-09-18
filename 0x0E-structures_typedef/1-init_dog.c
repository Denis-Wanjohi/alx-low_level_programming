#include "dog.h"
/**
 * init_dog(struct dog *d, char *name, float age, char *owner)-function initializer
 * @dog:struct
 * @name:value
 * @age:value
 * @owner:value
 * Return:null
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
