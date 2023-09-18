#include "main.h"

/**
 * puts2 - skips evry one character
 * @str: char pointer
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;
	char *c = str;
	int j;

	while (*c != '\0')
	{
		c++;
		len++;
	}
	i = len - 1;
	for (j = 0; j <= i; j++)
	{
		if (j % 10 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
