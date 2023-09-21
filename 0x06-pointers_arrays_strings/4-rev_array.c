#include "main.h"
/**
 * reverse_array - prints a string in reverse
 * @a: array
 * @n: nth number of element
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
