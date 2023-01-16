#include <stdlib.h>
#include "dog.h"
#include <stdio.h>


/**
  *print_dog - print a dog
  *@d: the struct data
  *Return: 0
  */

void print_dog(struct dog *d)
{

	if (d == NULL)
		printf("(nil))");

	if (d->name  == NULL)
		printf("Name: (nil)");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n",d->age);
	printf("Owner: %s\n",d->owner);

}
