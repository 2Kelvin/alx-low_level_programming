#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copy src string  to dest
 * @dest: string to copy to
 * @src: string to copy from
 * Return: dest string
 */

char *_strcpy(char *dest, char *src)
{
	int i, c = 0;

	while (src[c] != '\0')
		c++;
	for (i = 0; i <= c; i++)
		dest[i] = src[i];
	return (dest);
}

/**
  * _strlen - returns the length of a string
  * @s: pointer string
  * Return: the length of the string
  */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

/**
  * new_dog - creates a new dog object
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: new dog
  */

dog_t *new_dog(char *name, float age, chat *owner)
{
	int nameLen = _strlen(name);
	int ownerLen = _strlen(owner);
	dog_t *dogObj = malloc(sizeof(dog_t));

	/* checking if a new dog address was created successfully */
	if (dogObj == NULL)
		return (NULL);
	/* creating memory for the new dog properties */
	dogObj->name = malloc(sizeof(char) * (nameLen + 1));
	if (dogObj->name == NULL)
	{
		free(dogObj);
		return (NULL);
	}
	dogObj->owner = malloc(sizeof(char) * (ownerLen + 1));
	if (dogObj->owner == NULL)
	{
		free(dogObj);
		free(dogObj->name);
		return (NULL);
	}
	_strcpy(dogObj->name, name);
	_strcpy(dogObj->owner, owner);
	dogObj->age = age;

	return (dogObj);
}
