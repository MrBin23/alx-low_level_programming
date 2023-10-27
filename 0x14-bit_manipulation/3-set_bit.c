#include "main.h"
/**
 * set_bit - set value of bit to zero
 * @n: pointer to unsigned long int
 * @index: index of bit to set
 * Return: 1 on success or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
