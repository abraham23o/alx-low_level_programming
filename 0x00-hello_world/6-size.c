#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	float b;
	long int c;
	char d;
	long long int e;

	printf("Size of an int: %lu bytes\n", sizeof(a)); 
	printf("Size of a float: %lu bytes\n", sizeof(b));
	printf("Size of a long int: %lu bytes\n", sizeof(c));
	printf("Size of a char: %lu bytes\n", sizeof(d));
	printf("Size of a long long int: %lu bytes\n", sizeof(e));
}
