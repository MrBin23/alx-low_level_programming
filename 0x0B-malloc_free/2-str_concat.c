#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatanates 2 strings
 * @s1: first string to cat
 * @s2: second string to cat
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *result;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (result);

	strcpy(result, s1);
	strcpy(result, s2);

	return (result);
}
