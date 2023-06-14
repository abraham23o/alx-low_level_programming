#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated memory
 * @str: string to be printed
 * Return: string
 */
char *_strdup(char *str)
{
	char *word;
	int i, k;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	for (k = 0; str[k]; k++)
		word[k] = str[k];
	return (word);
}
