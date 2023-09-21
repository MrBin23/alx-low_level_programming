#include "main.h"
/**
 * leet - encodes a string into 1337
 * @n: char value
 * Return: n
 */
char *leet(char *n)
{
	int i;
	int j;

	char c[] = "aAeEoOtTlL";
	char p[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == c[j])
			{
				n[i] = p[j];
			}
		}
	}
	return (n);
}
