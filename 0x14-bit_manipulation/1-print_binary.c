#include "main.h"
/**
 * print_binary - prints binary represntation of a number
 * @n: number to print rep
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int zero = 0;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask != 0)
	{
		if ((n & mask) != 0)
			zero = 1;

		if (zero)
			_putchar((n & mask) ? '1' : '0');

		mask = mask >> 1;
	}

	if (!zero)
		_putchar('0');
}
