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

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dogObj;
	int nameLen = 0, ownerLen = 0;

	/* if name & owner args are not empty */
	/* malloc .name & .owner and copy respective args into them */
	if (name !=  NULL && owner != NULL)
	{
		nameLen = _strlen(name) + 1;
		ownerLen = _strlen(owner) + 1;
		dogObj = malloc(sizeof(dog_t));

		if (dogObj == NULL)
			return (NULL);

		dogObj->name = malloc(sizeof(char) * nameLen);
		if (dogObj->name == NULL)
		{
			free(dogObj);
			return (NULL);
		}

		dogObj->owner = malloc(sizeof(char) * ownerLen);
		if (dog->owner == NULL)
		{
			free(dogObj->name);
			free(dogObj);
			return (NULL);
		}

		dogObj->name = _strcpy(dogObj->name, name);
		dogObj->owner = _strcpy(dogObj->owner, owner);
		dogObj->age = age;
	}

	return (dogObj);
}
