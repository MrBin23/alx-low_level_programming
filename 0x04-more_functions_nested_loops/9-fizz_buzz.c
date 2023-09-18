#include <stdio.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 0; j <= 100; j++)
	{
		if (j == 1)
		{
			printf("%d", j);
		}
		else if (j % 5 == 0 && j % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (j % 3 == 0 && j % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (j % 3 == 0 && j % 5 != 0)
		{
			printf(" FIZZ");
		}
		else
		{
			printf(" %d", j);
		}
	}
	printf("\n");

	return (0);
}
