#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: 1st element
 * @age: 2nd element
 * @owner: 3rd element
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * len1 + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * len2 + 1);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
