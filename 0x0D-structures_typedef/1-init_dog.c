#include "dog.h"
/**
 * init_dog - initialize struct dog
 * @d: pointer
 * @name: pointer
 * @age: float
 * @owner: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
