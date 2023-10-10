#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocated memory
 * @b: data type to allocate memory
 * Return: i
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
