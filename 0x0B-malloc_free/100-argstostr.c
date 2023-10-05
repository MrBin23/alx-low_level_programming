#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * argstostr - concatanates all arguments
 * @ac: int value
 * @av: char
 * Return: total
 */
char *argstostr(int ac, char **av)
{
	int i;
	size_t total = 0;
	char *result;
	size_t arg_length;
	size_t current_ind = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total += strlen(av[i]) + 1;

	result = malloc(sizeof(char) * (total + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg_length = strlen(av[i]);
		strncpy(result + current_ind, av[i], arg_length);
		current_ind += arg_length;
		result[current_ind] = '\n';
		current_ind++;

	}
	result[total] = '\0';

	return (result);
}
