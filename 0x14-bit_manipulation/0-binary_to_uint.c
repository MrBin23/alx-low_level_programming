#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: value to convert
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			result = result << 1;
		}
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);
		i++;
	}
	return (result);
}
