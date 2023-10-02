#include <stdio.h>
#include "main.h"
/**
 * main - entry
 * @argv: command line arg
 * @argc: number of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
