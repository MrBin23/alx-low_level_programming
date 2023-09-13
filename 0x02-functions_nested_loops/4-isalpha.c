#include "main.h"
/**
 * _isalpha - shows if alpha is capitalised
 * @c: int
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'c' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
