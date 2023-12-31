#include "main.h"
/**
 * _pow_recursion - returns the power of  a number
 * @y: power raised to
 * @x: power raised to
 * Return: -1 or 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
