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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
