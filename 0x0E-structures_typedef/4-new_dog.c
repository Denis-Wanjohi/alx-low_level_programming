#include "dog.h"
#include <stdlib.h>
/**
 * new_dog(char *name, float age, char *owner)-creates a new dog
 * @name:name of the dog
 * @age:age of the dog
 * @owner:the owner of the dog
 * Return:NULL if code fails
 */
int _strlen(char *b)
{
int x = 0;
while (b[x] != '\0')
{
x++;
}
return (x);
}
dog_t *new_dog(char *name, float age, char *owner)
{
int len1,len2;
dog_t *newDog;
len1 = _strlen(name);
len2 =  _strlen(owner);
newDog = malloc(sizeof(dog_t));
newDog->name = malloc(sizeof(char) * (len1 + 1));
newDog->owner = malloc(sizeof(char) * (len2 + 1));
if (newDog == NULL)
{
return (NULL);
}
if (newDog->name == NULL)
{
free(newDog->name);
return (NULL);
}  
if (newDog->owner == NULL)
{
free(newDog->owner);
return (NULL);
}
newDog->name = name;
newDog->age = age;
newDog->owner  = owner;
return (newDog);
}
