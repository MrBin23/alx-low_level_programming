#include "main.h"
/**
 * swap_int - swaps two ints
 * @a: pointer int
 * @b:  int pointer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
