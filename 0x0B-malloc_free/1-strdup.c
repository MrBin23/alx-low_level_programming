#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: dup
 */
char *_strdup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;

	dup = malloc(sizeof(char) * len);

	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);

	return (dup);
}
