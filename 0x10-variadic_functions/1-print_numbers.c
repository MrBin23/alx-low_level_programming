#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers followed by a new line
 * @separator: string between numbers
 * @n: nth number
 * @...: multiple args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_args;
	unsigned int i;
	int value;

	va_start(my_args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(my_args, int);
		printf("%d", value);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(my_args);

	printf("\n");
}
