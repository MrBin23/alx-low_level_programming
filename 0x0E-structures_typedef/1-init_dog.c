#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialises variable
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;

	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;

	free(d->name);
	free(d->owner);
}
