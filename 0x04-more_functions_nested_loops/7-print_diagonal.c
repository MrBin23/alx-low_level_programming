#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: int
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else if (i < j)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
