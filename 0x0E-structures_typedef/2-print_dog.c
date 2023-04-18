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
		return;
	/* if any object properties is NULL print (nil) */
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	/* if everything is ok, print all the props */
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
