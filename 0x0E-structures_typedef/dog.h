#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - Short description
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
