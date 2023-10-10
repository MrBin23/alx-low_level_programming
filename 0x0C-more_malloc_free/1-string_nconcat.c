#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - cats 2 string
 * @s1: sring to cat
 * @s2: second string to cat
 * @n: number of bytes
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	ptr = malloc((len1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	strncpy(ptr, s1, len1);
	strncpy(ptr + len1, s2, n);
	ptr[len1 + n] = '\0';

	return (ptr);
}
