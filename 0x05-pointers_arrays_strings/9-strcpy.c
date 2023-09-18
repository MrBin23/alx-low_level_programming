#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: string from
 * @src: string to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
		i++;

	for ( ; j < l ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
