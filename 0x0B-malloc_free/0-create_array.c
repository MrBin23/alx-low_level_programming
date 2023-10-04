#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: array size
 * @c: chahr
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
