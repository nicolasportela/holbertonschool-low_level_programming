#include "dog.h"
#include <stdio.h>

/**
 * init_dog - print the name of a program
 * @d: member
 * @name: member
 * @age: member
 * @owner: member
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
