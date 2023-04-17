#include "dog.h"
#include <stdio.h>

/**
  * print_dog - prints a struct dog object
  * @d: dog object
  * Return: void
  */

void print_dog(struct dog *d)
{
	/* print nothing if d is NULL */
	if (d == NULL)
		printf("");
	/* if any object properties is NULL print (nil) */
	if (d->name == NULL || d->age == 0 || d->owner == NULL)
		printf("(nil)");
	/* if everything is ok, print all the props */
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
