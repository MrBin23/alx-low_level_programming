#include "main.h"
/**
 * clear_bit - sets bit to zero
 * @n: pointer to unsigned long int
 * @index: index of bit
 * Return: 1 or -1 if not success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
