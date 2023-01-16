#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
  *print_dog - print a dog
  *@d: the struct data
  *Return: 0
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");

	if (d->name  == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", (d->age) ? d->age : 0);
	printf("Owner: %s\n", d->owner);

}
