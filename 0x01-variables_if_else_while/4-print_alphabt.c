#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let != 'q' && let != 'e')
		{
			putchar(let);
		}
	}
	putchar('\n');

	return (0);
}
