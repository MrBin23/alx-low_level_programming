#include "main.h"
/**
 * print_binary - prints binary represntation of a number
 * @n: number to print rep
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int zero = 1;

	if (n == 0)
	{
		printf("0");
		return ;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask != 0)
	{
		if ((n & mask) != 0)
			zero = 0;

		if (!zero)
			printf("%d", (n & mask) != 0);

		mask = mask >> 1;
	}
}
