#include "dog.h"
#include <stdlib>
/**
 * free_dog-frees the values
 * @d:dog to be freed
 */
void free_dog(dog_t *d)
{
if (d != NULL )
{
free(d->name);
free(d->age);
free(d->owner);
free(d);
}
}
