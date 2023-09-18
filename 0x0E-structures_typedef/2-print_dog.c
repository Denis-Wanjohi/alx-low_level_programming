#include "dog.h"
#include <stdio.h>
/**
 * print_dog(struct dog *d)-prints details
 * type dog
 * @d:struct
 *
 */
void print_dog(struct dog *d)
{
if (d->name == NULL || d->owner == NULL)
{   
printf("nil");
}
else
{
printf("Name: %s\n",d->name);
printf("Age: %f\n",d->age);
printf("Owner: %s\n",d->owner);
}
}
