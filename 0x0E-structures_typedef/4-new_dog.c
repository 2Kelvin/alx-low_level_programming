#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new dog object
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: new dog
  */

dog_t *new_dog(char *name, float age, chat *owner)
{
	dog_t *dogObj = malloc(sizeof(dog_t));

	/* checking if a new dog address was created successfully */
	if (dogObj == NULL)
		return (NULL);

	/* assigning properties passed to the new dog */
	dogObj->name = name;
	dogObj->age = age;
	dogObj->owner = owner;

	return (dogObj);
}
