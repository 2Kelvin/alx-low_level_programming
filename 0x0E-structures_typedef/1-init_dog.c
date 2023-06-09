#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initialize a dog object from class dog
  * @d: dog object
  * @name: dog's name
  * @age: dog's age
  * @owner: dog owner
  * Return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* assign memory first if there is none */
	/* then assign properties */
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
