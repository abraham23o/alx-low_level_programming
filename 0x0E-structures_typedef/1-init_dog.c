#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: pointer variable of type struct dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: dog's info
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
