#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: first string
 * @src: string to cat with
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
