#include "main.h"
/**
 * _atoi - covert string to int
 * @s: string to be converted
 * Return: 0
 */
int _atoi(char *s)
{
	int i, j, k, len, f, num;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	f = 0;
	num = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			j++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (j % 2)
				num = -num;

			k = k * 10 + num;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (k);
}
