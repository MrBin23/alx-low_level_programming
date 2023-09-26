#include "main.h"
/**
 * *_strstr - locates  a substring
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *p = needle;

		while (*c == *p && *p != '\0')
		{
			c++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
