#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings followedd by new line
 * @separator: string in between
 * @n: nth number
 * @...: multiple args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_args;
	unsigned int i;
	const char *str;

	va_start(my_args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(my_args, const char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);


		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(my_args);

	printf("\n");
}
