#include "dog.h"

/**
 * free_dog - free a dog object from memory.
 * @d: the dog object to free.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
