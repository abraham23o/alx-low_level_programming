#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: variable to be initialized
 * @name: 1st element
 * @age: 2nd element
 * @owner: 3rd element
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
