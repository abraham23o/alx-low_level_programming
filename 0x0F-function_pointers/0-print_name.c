#include <stdio.h>

/**
 * print_name - function to receive a function as a parameter
 * @name: name to be printed / changed to uppercase
 * @*f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
