#include "dog.h"
#include <stdlib.h>
/**
 * init_dog-function initializer
 * type dog
 * @d:dog identifier
 * @name:value
 * @age:value
 * @owner:value
 * Return:null
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
d -> name = name;
d -> age = age;
d -> owner = owner;
}

