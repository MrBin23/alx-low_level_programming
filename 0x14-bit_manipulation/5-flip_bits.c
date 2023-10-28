#include "main.h"
/**
 * flip_bits - returns number of bit fliped
 * @n: first number
 * @m: second number
 * Return: number of bit that needs to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result != 0)
	{
		result &=  result - 1;
		count++;
	}

	return (count);
}
