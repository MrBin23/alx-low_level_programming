#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: char pointer
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
