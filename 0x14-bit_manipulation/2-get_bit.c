#include "main.h"
/**
 * get_bit - gets value of a given bit index
 * @n: number to recieve bit
 * @index: index in bit to retriew=ve
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	if (index >= sizeof(unsigned long int) * 8 - 1)
		return (-1);

	mask = 1UL << index;
	bit = (n & mask) != 0;

	return (bit);
}
