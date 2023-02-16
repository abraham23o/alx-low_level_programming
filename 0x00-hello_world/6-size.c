#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
    int a;
    float b;
    long int c;
    char d;
    long long int e;

    // sizeof evaluates the size of a variable
    printf("Size of a char: %zu bytes\n", sizeof(d));
    printf("Size of an int: %zu bytes\n", sizeof(a));
    printf("Size of a long int: %zu bytes\n", sizeof(c));
    printf("Size of a long long int: %zu bytes\n", sizeof(e));
    printf("size of a float: %zu bytes\n", sizeof(b));
    return 0;
}

