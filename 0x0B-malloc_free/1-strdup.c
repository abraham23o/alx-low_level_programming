#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *strd_up;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	strd_up = malloc(sizeof(char) * (len + 1));

	if (strd_up == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		strd_up[i] = str[i];
	return (strd_up);
}
