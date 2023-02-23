#include <stdio.h>
/**
 * main - Print "FizzBuzz"
 *
 * Description: Print "Fizzbuzz" for numbers which are multiples
 * of both 3 and 5, "Fizz" for multiples of 3
 * and "Buzz" for multiples of 5
 *
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 ==0)
			printf("FizzBuzz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", x);
	}
	printf("\n");

	return (0);
}
