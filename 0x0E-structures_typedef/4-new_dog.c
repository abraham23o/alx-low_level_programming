#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog - function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: dog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpynme, *cpyownr;
	int i, len_nme = 0, len_ownr = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_nme])
		len_nme++;
	while (owner[len_ownr])
		len_ownr++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpynme = malloc(sizeof(len_nme + 1));
	if (cpynme == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cpynme[i] = name[i];
	cpynme[i] = '\0';

	cpyownr = malloc(sizeof(len_ownr + 1));
	if (cpyownr == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpyownr[i] = owner[i];
	cpyownr[i] = '\0';

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
