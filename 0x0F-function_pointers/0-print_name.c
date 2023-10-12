#include "function_pointers.h"
/**
 * print_name - printa a name
 * @name: function pointer
 * @f: main function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	(*f)(name);
}
