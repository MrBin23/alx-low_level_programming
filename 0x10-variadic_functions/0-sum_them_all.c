#include "variadic_functions.h"
/**
 * sum_them_all - sums multiple numbers up
 * @n: nth value
 * @...: multiple args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int value;
	int sum = 0;
	unsigned int i;
	va_list my_args;

	if (n == 0)
		return (0);


	va_start(my_args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(my_args, int);
		sum += value;
	}
	va_end(my_args);

	return (sum);
}
