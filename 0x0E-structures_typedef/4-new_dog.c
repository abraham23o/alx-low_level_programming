#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - find the length of a string
 * @str: string whose length we are to find
 * Return: length of string
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copy string from src to dest
 * @dest: location to copy string
 * @src: string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len])
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

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
	int len_nme, len_ownr;

	len_nme = _strlen(name);
	len_ownr = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (len_nme + 1));
	if (new_dog->name == NULL)
		return (NULL);
	_strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(char) * (len_ownr + 1));
	if (new_dog->owner == NULL)
		return (NULL);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
