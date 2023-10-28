#include "main.h"
/**
 * get_endianness - checkes for endianness
 * Return: 1 0r 0
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *ptr = (char*)&value;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
