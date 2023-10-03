#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _numcheck - checks a string
 * @str: char pointer
 * Return: 1
 */
int _numcheck(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - entry
 * @argv: comman line arg
 * @argc:  arg num
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num;
	int strToint;
	int total = 0;

	num = 1;
	while (num < argc)
	{
		if (_numcheck(argv[num]))
		{
			strToint = atoi(argv[num]);
			total += strToint;
		}
		else
		{
			printf("ERROR\n");
			return (1);
		}
		num++;
	}
	printf("%d\n", total);
	return (0);
}
