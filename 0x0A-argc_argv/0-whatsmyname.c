#include <stdio.h>
#include "main.h"
/**
 * main - entry
 * @argv: command line argument
 * @argc: number of args
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
