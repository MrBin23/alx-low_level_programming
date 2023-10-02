#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to int
 * @s: string converted
 * Return: n
 */
int _atoi(char *s)
{
	int d, n, i, digit, len, f;

	d = 0;
	i = 0;
	digit = 0;
	len = 0;
	f = 0;
	n = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			d++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multipies 2 numbers
 * @argv: command line arg
 * @argc: arg number
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("ERROR\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
