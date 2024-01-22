#include "dog.h"

/**
 * init_dog - initialize the dog interface with the given configuration.
 * @d: the configuration to initialize the dog interface.
 * @name: the name of the dog interface.
 * @age: the age of the dog interface.
 * @owner: the owner of the dog interface.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
