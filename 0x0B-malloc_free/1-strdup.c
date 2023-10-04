#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates string
 * @str: sting to be duplicated
 * Return: pointer to a new string which is duplicate of str
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	dup_str = malloc(sizeof(char) * strlen(str) + 1);
	if (dup_str == NULL)
		return (NULL);

	for (; str[j]; j++)
		dup_str[j] = str[j];

	return (dup_str);
}
