#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function to concatenate two strings
 * @s1: destination str to be added to
 * @s2: source, str to be concatenated to s1
 * Return: pointer to the newly formed str after concatenation
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0, j = 0, count1 = 0, count2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[count1])
		count1++;

	while (s2[count2])
		count2++;

	s3 = malloc(sizeof(char) * (count1 + count2 + 1));
	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		while (i < count1)
		{
			s3[i] = s1[i];
			++i;
		}
	}

	if (s2)
	{
		while (i < (count1 + count2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
