#include "main.h"
/**
 * _isupper - prints letters in upper case
 * Return: 1 ro 0
 * @c: int
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
