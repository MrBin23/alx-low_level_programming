#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: copy to
 * @src: copy to
 * @n: iterating unsigned in
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
