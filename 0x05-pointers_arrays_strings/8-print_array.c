#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: char pointer
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
