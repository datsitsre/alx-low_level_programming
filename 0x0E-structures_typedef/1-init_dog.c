#include <stdlib.h>
#include "dog.h"

/**
  *init_dog - initialize a dog
  *@d: dog 
  *@name: name of dog
  *@age: age 
  *@owner: owner
  *
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name =  name;
		d->age = age;
		d->owner = owner;
	}
}
