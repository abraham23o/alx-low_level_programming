#include <stdio.h>

int _atoi(char *s);

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument values
 * Return: Always 0, success
 */
int main(int argc, char *argv[])
{
	int times, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	times = num1 * num2;
	printf("%d\n", times);
	return (0);
}

/**
 * _atoi - convert string to integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
		int res = 0;
		int sign = 1;
		int i = 0;

		if (s[0] == '-')
		{
			sign = -1;
			i++;
		}

		while (s[i])
		{
			if (!(s[i] - '0' >= 0 && s[i] - '0' <= 9))
				return (-1);
			res = res * 10 + s[i] - '0';
			i++;
		}
		return (sign * res);

}
