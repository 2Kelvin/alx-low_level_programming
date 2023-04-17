#include "dog.h"

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
	/* if d already has memory allocated assign properties */
	if (d != NUll)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	/* if no memory for d, allocate one first */
	else
		d = malloc(sizeof(struct dog));
}
