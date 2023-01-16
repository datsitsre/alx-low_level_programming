#include "dog.h"
#include <stdlib.h>
#include <string.h>



/**
  *new_dog - dog new
  *@name: name of person
  *@age: age of person
  *@owner: owner of person
  *Return: 0
  */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *ptr_dog;
	int name_1 = 0, own_1 = 0;

	if (name != NULL && owner != NULL)
	{
		name_1 = strlen(name) + 1;
		own_1 = strlen(owner) + 1;
		ptr_dog = malloc(sizeof(dog_t));

		if (ptr_dog == NULL)
			return (NULL);

		ptr_dog->name = malloc(sizeof(char) * name_1);

		if (ptr_dog->name == NULL)
		{
			free(ptr_dog);
			return (NULL);
		}

		ptr_dog->owner = malloc(sizeof(char) * own_1);

		if (ptr_dog->owner == NULL)
		{
			free(ptr_dog->name);
			free(ptr_dog);
			return (NULL);
		}

		ptr_dog->name = strcpy(ptr_dog->name, name);
		ptr_dog->owner = strcpy(ptr_dog->owner, owner);
		ptr_dog->age = age;
	}

	return (ptr_dog);
}

