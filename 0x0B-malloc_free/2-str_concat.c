#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: Destination
 * @s2: source
 * Return: combines string, s1
 */
char *str_concat(char *s1, char *s2)
{
	char *word;
	int i, j;

	if (s1 == NULL && s2 == NULL)
		return ("");
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	word = malloc(sizeof(char) * (i + j + 1));
	if (word == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		word[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		word[i] = s2[j];
		i++;
		j++;
	}
	word[i] = '\0';
	return (word);
}
