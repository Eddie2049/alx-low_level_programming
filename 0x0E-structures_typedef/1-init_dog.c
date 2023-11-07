#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - entry. initializes a variable of type struct dog
 * @d: param 1. pointer to struct dog d
 * @name: param 2. name
 * @age: param 3. age
 * @owner: param 4. owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
