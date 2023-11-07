#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - entry. frees memory allocated for a struct dog
 * @d: param. struct to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
